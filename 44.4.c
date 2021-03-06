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

int SecLast(PNODE Head)
{ 

}

int main()
{
    int iret=0, ino=0;
    PNODE First = NULL;

    InsertFirst(&First,10);
    InsertFirst(&First,22);
    InsertFirst(&First,15);
    InsertFirst(&First,44);
    InsertFirst(&First,35);
    InsertFirst(&First,51);

    Display(First);

    iret = SecLast(First);
    printf("\nSum of LL is : %d\n",iret);

    return 0;
}