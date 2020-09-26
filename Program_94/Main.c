// Application to create new file

#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>

int main()
{
    char name[20] = {'\0'};
    int fd = 0;     // File descriptor
    
    printf("Enter file name\n");
    scanf("%s",name);
    
    fd = creat(name,0777); // File gets opened with read and write mode
    if(fd == -1)
    {
        printf("Unable to create file\n");
    }
    else
    {
        printf("File succesfully created with fd %d\n",fd);
    }
    
    close(fd);
    return 0;
}

