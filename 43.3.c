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

int Addition(PNODE Head)
{
    int iSum =0;

    while(Head != NULL)
    {
        iSum = iSum + Head->data;
        Head = Head->next;
    }
    return iSum;
}

int main()
{
    int iret=0, ino=0;
    PNODE First = NULL;

    InsertFirst(&First,10);
    InsertFirst(&First,40);
    InsertFirst(&First,30);
    InsertFirst(&First,40);
    InsertFirst(&First,50);
    InsertFirst(&First,20);

    Display(First);

    

    iret = Addition(First);
    printf("\nAddition is : %d\n",iret);

    return 0;
}