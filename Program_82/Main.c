

// Dynamic implementation of stack using linked list

// push             InsertFirst
// pop               DeleteFirst
// Display          Display

// type of linked list : Singly linear

#include<stdio.h>
#include<stdlib.h>

/*
 typedef struct node
{
    int data;
    struct node *next;
}NODE, *PNODE, **PPNODE;
*/

struct node
{
    int data;
    struct node *next;
};

typedef struct node NODE;
typedef struct node * PNODE;
typedef  struct node ** PPNODE;

void Push(PPNODE Head, int value)   // InsertFirst
{
    PNODE newn = (PNODE) malloc(sizeof(NODE));
    newn->data = value;
    newn->next = NULL;
    
    if(*Head == NULL)
    {
        *Head = newn;
    }
    else
    {
        newn->next = *Head;
        *Head = newn;
    }
}

int Pop(PPNODE Head)        // Deletefirst
{
    int no = 0;
    PNODE temp = *Head;
    
    if(*Head == NULL)
    {
        printf("Stack is empty\n");
        return -1;
    }
    else
    {
		no=(*Head)->data;
		*Head=(*Head)->next;
		free(temp);
		return no;
	}
}
void Display(PNODE Head)
{
    while(Head != NULL)
    {
        printf("%d\t",Head->data);
        Head = Head -> next;
		
    }
}

int Count(PNODE Head)           
{
    int iCnt = 0;
    
    while(Head != NULL)
    {
        iCnt++;                                        //printf("%d\t",Head->data);
        Head = Head -> next;
    }
    
    return iCnt;
}


int main()
{
	 PNODE First = NULL;    
	int choice=1,no=0;
	
	printf("\n-------------------------------");
	printf("\nDynamic implemention of Stack\n");
	printf("\n-------------------------------");
	

	
	while(choice)
	{
		printf("\n 1: Push the element");
		printf("\n 2: Pop the element");
		printf("\n 3: Display  the element");
		printf("\n 4: Count the number of elements");	
		printf("\n 0: Exit");+9
		
		printf("\n-------------------------------");
		
		printf("\nPlease enter your choice\n");
		scanf("%d",&choice);
	
		switch(choice)
		{
			case 1:
				printf("Enter the element that u want to insert:-");
				scanf("%d",&no);
				Push(&First,no);
				break;
				
			
			case 2:
				no=Pop(&First);
				printf("Enter the element that u want to insert:-");
				break;
				
			case 3:	
				printf("\n-------------------------------\n");
				Display(First);
				printf("\n-------------------------------");
				break;
			case 4:
				
				printf("Count the element of Stack %d:\n",Count(First));
				break;
				
			case 5:
					break;
		}
		
	}
	
	return 0;
	
}
