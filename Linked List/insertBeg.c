#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node* next;
};
struct node* head;
void Insert(int x)
{
    struct node* temp= (struct node*)malloc(sizeof(struct node));
    temp->data=x;
    temp->next=head;
    head=temp;
}
void Print()
{
    struct node* temp= head;
    printf("List is: ");
    while(temp!=NULL){
        printf("%d ",temp->data);
        temp=temp->next;
    }
}
int main()
{
    head=NULL;
    int n,i,x;
    printf("How many numbers? ");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&x);
        Insert(x);
        Print();
        printf("\n");
    }
}