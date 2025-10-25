#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node* next;
};
struct Node* insert(struct Node* head, int x)
{
    struct Node* temp=(struct Node*)malloc(sizeof(struct Node));
    temp->data=x;
    temp->next=NULL;
    if(head==NULL){
        head=temp;
    }
    else{
        struct Node* temp2=head;
        while(temp2->next!=NULL){
            temp2=temp2->next;
        }
        temp2->next=temp;
    }
    return head;
}
void print(struct Node* head)
{
    for(struct Node* p=head;p!=NULL;p=p->next){
        printf("%d ",p->data);
    }
}
int main()
{
    struct Node* head=NULL;
    head=insert(head,2);
    head=insert(head,4);
    head=insert(head,6);
    head=insert(head,5);
    print(head);
}