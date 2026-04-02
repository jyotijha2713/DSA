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
void printList(Node *head)
{
    Node *temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}
void createLoopNode(Node *head, int x)
{
    if(head == NULL) return;

    Node *curr = head;
    Node *loopNode = NULL;

    //find node with required value
    while(curr->next!=NULL){
        if(curr->data==x)
            loopNode=curr;
        curr=curr->next;
    }
    //now curr is the last node
    curr->next=loopNode;
}
//by creating dummy node and breaking the links of the linked list
bool isLoop(Node *head)
{
    Node *temp = new Node(0);
    Node *curr = head;
    while(curr!=NULL)
    {
        if(curr->next==NULL)
            return false;
        if(curr->next==temp)
            return true;
        Node *next=curr->next;
        curr->next=temp;
        curr=next;
    }
    return false;
}
int main()
{
    Node *head = NULL;
    head = insertEnd(head,10);
    head = insertEnd(head,15);
    head = insertEnd(head,5);
    head = insertEnd(head,20);
    printList(head); cout<<endl;
    createLoopNode(head,15);
    if(isLoop(head))
        cout<<"Given Linked List contains loop."<<endl;
    else
        cout<<"Given Linked List does not contain loop."<<endl;
}