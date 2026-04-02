#include<iostream>
using namespace std;

struct Node{
    int data;
    Node *next;
    bool visited;
    Node(int x){
        data=x;
        next=NULL;
        visited = false;
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
        cout<<curr->data<<" ";
        curr = curr->next;
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
bool isLoop(Node *head)
{
    Node *curr=head;
    while(curr!=NULL){
        if(curr->visited==true)
            return true;

        curr->visited=true;
        curr=curr->next;
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
        cout<<"Given Linked List contains a loop."<<endl;
    else
        cout<<"Given Linked List does not contain a loop."<<endl;
}