#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node* next;
};
struct Node* insert(struct Node* head, int x)
{
    struct Node* temp = (struct Node*)malloc(sizeof(struct Node));
    temp->data=x;
    temp->next=NULL;
    if(head==NULL){
        head=temp;
    }
    else{
        struct Node* temp1=head;
        while(temp1->next!=NULL){
            temp1=temp1->next;
        }
        temp1->next=temp;
    }
    return head;
}
void print(struct Node* head)
{
    if(head==NULL)return;
    else{
        printf("%d ",head->data);
        print(head->next);
    }
}
void printRev(struct Node* head)
{
    if(head==NULL) return;
    else{
        print(head->next);
        printf("%d ",head->data);
    }
}
int main()
{
    struct Node* head=NULL;
    head=insert(head,16);
    head=insert(head,20);
    head=insert(head,24);
    head=insert(head,32);
    print(head);
    printf("\n");
    printRev(head);
}