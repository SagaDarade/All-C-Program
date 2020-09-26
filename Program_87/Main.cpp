#include<iostream>

using namespace std;

typedef int BOOL;
#define TRUE 1
#define FALSE 0


struct node
{
	int data;
	struct node *lchild;
	struct node *rchild;
};

typedef struct node NODE;
typedef struct node *PNODE;
typedef struct node **PPNODE;

class BST
{
	private:
	PPNODE Root;
	
	
	public:
	
	BST();
	void Insert(PPNODE,int);
	void Inorder(PNODE);
	void Preorder(PNODE);
	void Postorder(PNODE);
	int Search(int);
	
};//End of Class Declaration

BST::BST()
{
	Root=NULL;
}

void BST::Insert(PPNODE Root,int value)
{
	PNODE newn=new NODE;
	PNODE temp=*Root;
	
	newn->data=value;
	newn->lchild=NULL;
	newn->rchild=NULL;
	
	if(*Root==NULL)
	{
		*Root=newn;
	}
	else
	{
		while(1)
		{
			if(temp->data==value)
			{
				cout<<"Element alredy present : Unable to insert\n";
				delete(newn);
				break;
			}
			if(value<(temp->data))
			{
				if((temp->lchild)==NULL)
				{
					temp->lchild=newn;
					break;
				}
				temp=temp->lchild;
			}
			else if(value > (temp->data))
			{
				if((temp->rchild)==NULL)
				{
					temp->rchild=newn;
					break;
				}
				temp=temp->rchild;
			} //End of else
		} //End of while
	} // End of else
} //End of insert function  

void BST::Inorder(PNODE Root)
{
	if(Root!=NULL)
	{
		Inorder(Root->lchild);
		cout<<Root->data<<"  ";
		Inorder(Root->rchild);
	}
	
}

void BST::Preorder(PNODE Root)
{
	if(Root!=NULL)
	{
		cout<<Root->data<<"  ";
		Preorder(Root->lchild);
		Preorder(Root->rchild);
	}
	
}

void BST::Postorder(PNODE Root)
{
	if(Root!=NULL)
	{
		Postorder(Root->lchild);
		Postorder(Root->rchild);
		cout<<Root->data<<"  ";
		
	}
	
}

int Search(PNODE Root,int value)
{
	while(Root!=NULL)
	{
		if(Root->data==value)
		{
			break;
		}
		
		if(value<Root->data)
		{
			Root=Root->lchild;
		}
		else
		{
			Root=Root->rchild;
		}
		if(Root==NULL)
		{
			return FALSE;
		}
		else
		{
			return TRUE;
		}
	
	}
	
}


int main()
{
	PNODE First=NULL;
	
	BST obj;
	
	BOOL bRet=FALSE;
	int choice=1,no=0;
	
	while(choice!=0)
	{
		cout<<"\n************************\n";
		cout<<"1 Insert int BST :\n";
		cout<<"2 Search to BST :\n";
		cout<<"3 Inorder Display :\n";
		cout<<"4 Preorder Display :\n";
		cout<<"5 Postorder Display :\n";
		cout<<"0 Exist the Application :\n";
		cout<<"*****************************\n";
		
		cin>>choice;
		
		switch(choice)
		{
			case 1:
				cout<<"Enter number : \n";
				cin>>no;
				obj.Insert(&First,no);
				break;
				
			case 2:
					cout<<"Enter the element to search\n";
					cin>>no;
					bRet=Search(First,no);
					if(bRet==TRUE)
					{
						cout<<"Element is there in BST\n";
					}
					else
					{
						cout<<"There is no in BST\n";
					}
					break;		
				
			case 3:
				obj.Inorder(First);
				break;
				
			case 4:
				obj.Preorder(First);
				break;	
			
			case 5:
				obj.Postorder(First);
				break;	
				
				
			case 0:
				cout<<"Thank you using for the application\n";
				break;
		}// End of switch
	}// End of while
} //End of Main