#include<stdio.h>

struct node{
    int data;
    struct node* next;
};
void main()
{
    struct node *head,*newnode,*temp;
    head=NULL;
    int c=1;
    while(c!=0){
        newnode=(struct node*)malloc(sizeof(struct node));
        printf("Enter data: ");
        scanf("%d",newnode->data);
        newnode->next=NULL;

        if(head=NULL){
            head=temp=newnode;
        }
        else{
            temp->next=newnode;
            temp=newnode;
        }
        printf("Do you want to continue (0,1)?\n");
        scanf("%d",&c);
    }
    temp=head;
    while(temp!=NULL){
        printf("%d ",temp->data);
        temp=temp->next;
    }
}