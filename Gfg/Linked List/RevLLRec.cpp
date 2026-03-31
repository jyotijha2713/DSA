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
Node *insertEnd(Node *head, int x)
{
    Node *temp = new Node(x);
    if(head==NULL)
        return temp;
    Node *curr=head;
    while(curr->next!=NULL){
        curr=curr->next;
    }
    curr->next=temp;
    return head;
}
void printList(Node *head)
{
    Node *temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}
Node *revLLRec(Node *head)
{
    if(head==NULL||head->next==NULL)
        return head;
    Node *rest = revLLRec(head->next);
    head->next->next=head;
    head->next=NULL;
    return rest;
}
Node *revLLTailRec(Node *curr, Node *prev=NULL)
{
    if(curr==NULL)
        return prev;
    Node *next = curr->next;
    curr->next=prev;
    return revLLTailRec(next,curr);
}
int main()
{
    Node *head = NULL;
    head = insertEnd(head,10);
    head = insertEnd(head,20);
    head = insertEnd(head,25);
    head = insertEnd(head,40);
    head = insertEnd(head,65);
    printList(head); cout<<endl;
    head = revLLRec(head);
    printList(head); cout<<endl;
    head = revLLTailRec(head);
    printList(head);
}