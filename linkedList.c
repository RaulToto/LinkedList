#include <stdio.h>
#include <string.h>
#include <stdlib.h>
//--
struct node 
{
    int val;
    struct node *next;
};
struct node *head,*prev,*cur;
struct node *head1,*prev1,*cur1;
//void makeList(struct node *head,struct node *prev,struct node *cur);
void makeList();
void printList(struct node *head);
struct node* deletingNode(int);
void insertFirst(int );
void makeList1();
void concatenar();

void size();

int main()
{
    makeList(head);
    //makeList1();
    insertFirst(100);
    
    deletingNode(100);
    
    //deletingNode(100);
    printList(head);
   // printList(head1);
}
void makeList()
{
    head =malloc(sizeof(struct node));
    head->val=1;
    prev=head;
    int n=7;

    //prev->val=10;

    //printf("%d",head->val);
    for (int i = 2; i < n; i++)
    {
        cur=malloc(sizeof(struct node));
        cur->val=i;
        prev->next=cur;
        prev=cur;
    }

    //free(head);
    //free(cur);
    //printf("%d",cur->val);
}/*
void makeList1()
{
    head1 =malloc(sizeof(struct node));
    head1->val=1;
    prev1=head1;
    int n=7;
    for (int i = 2; i < n; i++)
    {
        cur1=malloc(sizeof(struct node));
        cur1->val=i;
        prev1->next=cur1;
        prev1=cur1;
    }
}*/
void printList(struct node *head)
{
    struct node *tem;
    tem=head;
    //printf("%d",tem->val);
    while (tem!=NULL)
    {
        printf("%d \n",tem->val);
        tem=tem->next;
    }
}
struct node* deletingNode(int key)
{
    prev=head;
    cur=head->next;
    while (cur!=NULL)
    {
        if (head->val==key)
        {
            struct node *tem;
            tem=head;
            head=head->next;
            free(tem);
            break;
        }

        else if(cur->val==key)
        {
            prev->next=cur->next;
            free(cur);
            break;
        }
        prev=cur;
        cur=cur->next;
    }
}
void insertFirst(int key)
{
    struct node *newhead;
    newhead =malloc(sizeof(struct node));
    newhead->val=key;
    //newhead->next=head;
    prev=head;
    head=newhead;
    head->next=prev->next;   
}
/*
void sort(){

   int i, j, k, tempKey, tempData ;
   struct node *current;
   struct node *next;
	
   int size = length();
   k = size ;
	
   for ( i = 0 ; i < size - 1 ; i++, k-- ) {
      current = head ;
      next = head->next ;
		
      for ( j = 1 ; j < k ; j++ ) {   
		
         if ( current->data > next->data ) {
            tempData = current->data ;
            current->data = next->data;
            next->data = tempData ;

            tempKey = current->key;
            current->key = next->key;
            next->key = tempKey;
         }
			
         current = current->next;
         next = next->next;                        
      }
   }   
}*/
/*
void concatena()
{
    int terminar=0;
    prev=head;
    cur=head->next;
    while (terminar!=-1)
    {
        if (cur->val==NULL)
        {
            prev->next=head1->next;
        }    
        prev=cur;
        cur=cur->next;
    }
}*/