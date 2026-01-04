#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node* next;
};
struct Node* head;
void insert(int x)
{
    struct Node* temp=(struct Node*)malloc(sizeof(struct Node));
    temp->data=x;
    temp->next=NULL;
    if(head==NULL)head=temp;
    else{
        struct Node* temp1=head;
        while(temp1->next!=NULL){
            temp1=temp1->next;
        }
        temp1->next=temp;
    }
}
void print(struct Node* p)
{
    if(p==NULL)return;
    printf("%d ",p->data);
    print(p->next);
}
void ReversePrint(struct Node* p)
{
    if(p==NULL)return;
    ReversePrint(p->next);
    printf("%d ",p->data);
}
void Reverse(struct Node* p)
{
    if(p->next==NULL){
        head=p;
        return;
    }
    Reverse(p->next);
    struct Node* q = p->next;
    q->next=p;
    p->next=NULL;
}
int main()
{
    head=NULL;
    insert(2); 
    insert(3); 
    insert(4); 
    insert(5);
    print(head); 
    printf("\n");
    ReversePrint(head);
    Reverse(head); printf("\n");
    print(head);
}