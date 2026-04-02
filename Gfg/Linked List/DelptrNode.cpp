#include<iostream>
using namespace std;

struct Node{
    int data;
    Node *next;
    Node(int x){
        data=x;
        next=NULL;
    }
};
Node *insertEnd(Node *head,int x)
{
    Node *temp = new Node(x);
    if(head==NULL) return temp;
    Node *curr=head;
    while(curr->next!=NULL){
        curr=curr->next;
    }
    curr->next=temp;
    return head;
}
void deleteNode(Node *ptr)
{
    Node *temp = ptr->next;
    ptr->data = temp->data;
    ptr->next = temp->next;
    delete(temp);
}
void printList(Node *head)
{
    Node *temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}
int main()
{
    Node *head=NULL;
    head = insertEnd(head,10);
    head = insertEnd(head,20);
    head = insertEnd(head,30);
    head = insertEnd(head,40);
    head = insertEnd(head,25);
    printList(head);cout<<endl;
    Node *ptr = head;
    while(ptr->data!=30){
        ptr=ptr->next;
    }
    deleteNode(ptr);
    printList(head);
}