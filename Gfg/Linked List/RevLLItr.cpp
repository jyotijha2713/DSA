#include<iostream>
using namespace std;

struct Node{
    int key;
    Node *next;
    Node(int x){
        key=x;
        next=NULL;
    }
};
Node *insertEnd(Node *head, int key)
{
    if(head==NULL){
        return new Node(key);
    }
    Node *curr = head;
    while(curr->next!=NULL){
        curr=curr->next;
    }
    curr->next = new Node(key);
    return head;
}
void printList(Node *head)
{
    Node *curr=head;
    while(curr!=NULL){
        cout<<curr->key<<" ";
        curr = curr->next;
    }
}
Node *revLLItr(Node *head)
{
    Node *curr, *prev, *next;
    curr=head;
    prev=NULL;
    while(curr!=NULL)
    {
        next=curr->next;
        curr->next=prev;
        prev=curr;
        curr=next;
    }
    head = prev;
    return head;
}
int main()
{
    Node *head = NULL;
    head = insertEnd(head,10);
    head = insertEnd(head,5);
    head = insertEnd(head,20);
    head = insertEnd(head,15);
    printList(head); cout<<endl;
    head = revLLItr(head);
    printList(head);
}