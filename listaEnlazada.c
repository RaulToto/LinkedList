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
void insertFirst(Node *,int);
void insertMiddle(Node *,Node *);
void insertSort(Node *,Node *,int );
void printList(Node *);
int size(Node *);
void concatenar(Node *,Node *);
//---------------------------------------------
int main()
{
    //-------- create node head --------------
    Node *head;
    head=malloc(sizeof(Node));

    //-------- create node head 1------------
    Node *head1;
    head1=malloc(sizeof(Node));
    int option;
    printf("\n1-MAKELIST\n 2-INSERT FISRTS \n 3-INSERT MIDDLE \n 4-INSERT SORTED \n 5-PRINTLIST \n 6-LISTCAT \n 7-SIZE\n -1-EXIT\n");
    scanf("%d",&option);    
    while (option!=-1)
    {
        if(option==1)
        {
            
            makeList(head);//makelist
            makeList(head1);
        }
        else if(option==2)
        {
            //------- create newnode for insertFirst 
            /*Node *newHead;
            newHead=malloc(sizeof(Node));
            newHead->val=100;
            insertFirst(head,newHead);
            */
        }
        else if(option==3)
        {
            //---------insert node in middle---------
            Node *middleNode;
            middleNode=malloc(sizeof(Node));
            middleNode->val=50;
            insertMiddle(head,middleNode);
        }
        else if(option==4)
        {
            //-------insert node in sorted node .-------
  
            Node *sortedNode;
            sortedNode=malloc(sizeof(Node));
            sortedNode->val=30;
            int pos=5;
            insertSort(head,sortedNode,pos);
            
        }
        else if(option==5)
        {
            //prinlist:
            printList(head);
            printList(head1);
    
        }
        else if(option==6)
        {
            //-------listCat head and head1
            concatenar(head,head1);

        }
        else if(option==7)
        {
             printf("%d head1",size(head));
             printf("%d head 2",size(head));
   
        }
        printf("\n1-MAKELIST\n 2-INSERT FISRTS \n 3-INSERT MIDDLE \n 4-INSERT SORTED \n 5-PRINTLIST \n 6-LISTCAT \n 7-SIZE\n -1-EXIT\n");
        scanf("%d",&option);
    }
    
    //---------------------------------------
    
    //printf("%d",newHead->val);
    //insertFirst(head,100);
    
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
        printf("%d--",tem->val);
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
 
}/*
void insertFirst(Node *head,Node *newHead)
{
    newHead->next=head;
}
void inserteFirst(Node *head,int key)
{
    Node *newNode;
    newNode=malloc(sizeof(Node));
    newNode->val=key;
    prev=head;
    head=newNode;
    head->next=prev->next;
}*/
int size(Node *head)
{
    Node *tem;
    tem=head;
    int cont=0; 
    while(tem!=NULL)
    {
        cont++;
        tem=tem->next;
    }
    free(tem);
    return cont;
}
void insertMiddle(Node *head,Node *middleNode)
{
    Node *tem,*prev;
    prev=head;
    tem=head->next;
    int middle=size(head);
    int cont=0;
    while (tem!=NULL)
    {
        if (cont==middle)
        {
            prev->next=middleNode;
            middleNode->next=tem;
            break;
        }
        prev=tem;
        tem=tem->next;
    }
}
void insertSort(Node *head,Node *newNode ,int pos)
{
    Node *prev,*cur;
    prev=head;
    cur=head->next;
    int cont=0;
    while (cur!=NULL)
    {
        if (cont==pos)
        {
            prev->next=newNode;
            newNode->next=cur;
            break;
        }
        prev=cur;
        cur=cur->next;
        cont++;
    }
}
void concatenar(Node *head,Node *head1)
{
    Node *prev,*cur;
    prev=head;
    cur=head->next;
    while(1)
    {
        if (cur==NULL)
        {
            prev->next=head1;
            free(cur);
            break;
        }
        prev=cur;
        cur=cur->next;
    }
}