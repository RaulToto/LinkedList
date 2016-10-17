#include <stdio.h>
#include <stdlib.h>
typedef struct list Node;
struct list 
{
    int val;
    Node *next;
};
// node head,prev,cur;
//--------------Create structures-------------

//-----------------------------------------------
//funtions of linkedList-----------------------
void makeList(Node *);
void insertFirst(Node *,Node *);
void printList(Node *);

//---------------------------------------------

int main()
{
    
   // 
    Node *head;
    head=malloc(sizeof(Node));
    makeList(head);
    Node *newHead;
    newHead=malloc(sizeof(Node));
    
    printf("%d",head->val);
    //printList(head);
    //printf("%d",head.val);
//    
    /*
    int n=7;
    head->aval=12;
    prev=head;
    for (int i = 2; i < n; i++)
    {
        cur=malloc(sizeof(struct node));
        cur->val=i;
        prev->next=cur;
        prev=cur;
    }*/
    
}

void printList(Node *head)
{
    
    Node *tem;
    tem=head;
    while (tem!=NULL)
    {
        printf("%d\n",tem->val);
        tem=tem->next;
    }
    free(tem);

}
void makeList(Node *head)
{
    Node *prev,*cur;
    //head=malloc(sizeof(Node_t));
    int n=7;
    head->val=12;
    prev=head;
    for (int i = 2; i < n; i++)
    {
        cur=malloc(sizeof(Node));
        cur->val=i;
        prev->next=cur;
        prev=cur;
    }

    prev->next=NULL;
    //printlist----------------------
   /* node *tem;
    tem=head;
    while (tem!=NULL)
    {
        printf("%d\n",tem->val);
        tem=tem->next;
    }*/
 
}
void insertFirst(Node *head,Node *newHead)
{

}