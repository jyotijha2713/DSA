#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node* next;
};
struct Node* head;
void Reverse(struct Node* p)
{
    if(p->next==NULL){
        head=p;
        return;
    }
    Reverse(p->next);
    struct Node* q = p->next;
    q->next = p;
    p->next=NULL;
}
void print()
{
    struct Node* temp=head;
    while(temp!=NULL){
        printf("%d ",temp->data);
        temp=temp->next;
    }
}
void insert(int x)
{
    struct Node* temp = (struct Node*)malloc(sizeof(struct Node));
    temp->data=x;
    temp->next=NULL;
    if(head==NULL) head=temp;
    else{
        struct Node* temp1=head;
        while(temp1->next!=NULL){
            temp1=temp1->next;
        }
        temp1->next=temp;
    }
}
int main()
{
    head=NULL;
    int n,i,x;
    printf("How many numbers? ");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        printf("Enter number: ");
        scanf("%d",&x);
        insert(x);
        printf("List is: ");
        print(); 
    }
    Reverse(head);
    printf("\n");
    printf("Reversed list is: ");
    print();
}