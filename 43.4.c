#include<stdio.h>
#include<stdlib.h>

#define TRUE 1 
#define False 0

typedef int BOOL;

typedef struct node
{
    int data;
    struct node *next;
}NODE,*PNODE,**PPNODE;

void InsertFirst(PPNODE Head, int no)
{
    PNODE newn = NULL;

    newn = (PNODE)malloc(sizeof(NODE));
    newn -> data = no;
    newn ->next = NULL;

    if(*Head == NULL)
    {
        *Head = newn;
    }
    else
    {
        newn -> next = *Head;
        *Head = newn;
    }
}

void Display(PNODE Head)
{
    PNODE temp = Head;

    while(temp != NULL)
    {
        printf("|%d->",temp->data);
        temp = temp-> next;
    }

}

int Maximum(PNODE Head)
{ 
    int iCnt =1;
    PNODE temp = Head;

    while(temp != NULL)
    {
        if((temp->data) > iCnt)
        {
            iCnt = temp->data;
        }
        temp = temp->next;
    }
    return iCnt;
}

int main()
{
    int iret=0, ino=0;
    PNODE First = NULL;

    InsertFirst(&First,10);
    InsertFirst(&First,40);
    InsertFirst(&First,70);
    InsertFirst(&First,40);
    InsertFirst(&First,50);
    InsertFirst(&First,20);

    Display(First);

    iret = Maximum(First);
    printf("\nMaximum Number is : %d\n",iret);

    return 0;
}