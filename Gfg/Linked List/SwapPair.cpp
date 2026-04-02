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
    Node *curr = head;
    while(curr!=NULL){
        cout<<curr->key<<" ";
        curr = curr->next;
    }
}
Node *swapPair(Node *head)
{
    if(head==NULL || head->next==NULL)return head;
    Node *curr=head->next->next;
    Node *prev=head;
    head = head->next;
    head->next=prev;
    while(curr!=NULL && curr->next!=NULL)
    {
        prev->next=curr->next;
        prev=curr;
        Node *next=curr->next->next;
        curr->next->next=curr;
        curr=next;
    }
    prev->next=curr;
    return head;
}
int main()
{
    Node *head = NULL;
    head = insertEnd(head,1);
    head = insertEnd(head,2);
    head = insertEnd(head,3);
    head = insertEnd(head,4);
    head = insertEnd(head,5);
    head = insertEnd(head,6);
    printList(head);cout<<endl;
    head=swapPair(head);
    printList(head);
}