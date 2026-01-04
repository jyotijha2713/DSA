#include<iostream>
#include<stack>
using namespace std;
struct Node{
    int data;
    struct Node* next;
};
struct Node* head;
void Reverse()
{
    stack <struct Node*> s;
    if(head==NULL)return;
    struct Node* temp=head;
    while(temp!=NULL){
        s.push(temp);
        temp=temp->next;
    }
    head=temp; s.pop();
    while(!s.empty()){
        temp->next=s.top();
        s.pop();
        temp=temp->next;
    }
    temp->next=NULL;
}
void insert(int x)
{
    Node* temp= new Node;
    temp->data=x;
    temp->next=NULL;
    if(head==NULL){
        head=temp;
        return;
    }
    Node* temp1=head;
    while(temp1->next!=NULL){
        temp1=temp1->next;
    }
    temp1->next=temp;
}
void print()
{
    Node* temp=head;
    while(temp!=NULL){
        printf("%d ",temp->data);
        temp=temp->next;
    }
}
int main()
{
    head=NULL;
    insert(2);insert(3);insert(4);print();
    Reverse(); print();
}