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

void SumDigit(PNODE Head)
{
    int Sum =0, iDigit=0;

    PNODE temp = Head;

    while(temp!= NULL)
    {
        while((temp ->data) != 0)
        {
            iDigit = (temp->data) % 10;
            Sum = Sum +iDigit;
            temp->data = (temp->data) /10;
        }
        printf("\t%d\t",Sum);
        Sum =0;
        temp= temp->next;
    }

}  


int main()
{
    int iret=0, ino=0;
    PNODE First = NULL;

    InsertFirst(&First,11);
    InsertFirst(&First,20);
    InsertFirst(&First,55);
    InsertFirst(&First,32);
    InsertFirst(&First,40);
    InsertFirst(&First,15);

    Display(First);

    SumDigit(First);
    

    return 0;
}