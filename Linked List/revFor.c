#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node* next;
};
struct node* Reverse(struct node* head)
{
    struct node *current,*prev,*next;
    prev=NULL;
    for(current=head;current!=NULL;current=next){
        next=current->next;
        current->next=prev;
        prev=current;
    }
    head=prev;
    return head;
}
struct node* Insert(struct node* head, int x)
{
    struct node *temp=(struct node*)malloc(sizeof(struct node));
    temp->data=x;
    temp->next=NULL;
    if(head==NULL){
        head=temp;
    }
    else{
        struct node* temp1 = head;
        while(temp1->next!=NULL){
            temp1=temp1->next;
        }
        temp1->next=temp;
    }
    return head;
}
void Print(struct node* head)
{
    while(head!=NULL){
        printf("%d ",head->data);
        head=head->next;
    }
}
int main()
{
    struct node* head=NULL;
    head=Insert(head,2);
    head=Insert(head,4);
    head=Insert(head,6);
    head=Insert(head,8);
    Print(head);
    head=Reverse(head);
    printf("\n");
    Print(head);
}