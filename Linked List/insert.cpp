#include<iostream>
using namespace std;
typedef struct node{
    int data;
    node* next;
}l;
l* head = NULL;
void insert(l*ptr)
{
    scanf("%d",&ptr->data);
    ptr->next=NULL;
    int c;
    printf("Want to continue?");
    scanf("%d",&c);
    if(c==1){
        ptr->next=new l;
        ptr=ptr->next;
        insert(ptr);
    }
}
void display(l*ptr)
{
    while(ptr!=NULL){
        printf("%d ",ptr->data);
        ptr=ptr->next;
    }
}
int main()
{
    l*ptr=new l;
    head = ptr;
    insert(ptr);
    display(ptr);
}