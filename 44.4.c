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

int Sum(PNODE Head)
{ 
    PNODE temp = Head;
    int iSum = 0;

    while(temp != NULL)
    {
        if((temp->data)%2 == 0)
        {
            iSum = iSum + (temp->data);
        }
        temp = temp->next;
    }
    return iSum;
}

int main()
{
    int iret=0, ino=0;
    PNODE First = NULL;

    InsertFirst(&First,11);
    InsertFirst(&First,20);
    InsertFirst(&First,17);
    InsertFirst(&First,32);
    InsertFirst(&First,40);
    InsertFirst(&First,15);

    Display(First);

    iret = Sum(First);
    printf("\nSum of LL is : %d\n",iret);

    return 0;
}