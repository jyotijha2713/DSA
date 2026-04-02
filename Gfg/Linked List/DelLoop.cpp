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
    if(head == NULL)
        return temp;
    Node *curr=head;
    while(curr->next!=NULL)
        curr=curr->next;
    curr->next=temp;
    return head;
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
void printList(Node *head)
{
    Node *curr=head;
    while(curr!=NULL){
        cout<<curr->data<<" ";
        curr=curr->next;
    }
}
Node *detectRemoveLoop(Node *head)
{
    Node *slow=head, *fast=head;
    while(fast!=NULL && fast->next!=NULL){
        slow=slow->next;
        fast=fast->next->next;
        if(slow==fast)
            break;
    }
    if(slow!=fast)
        return head;
    slow=head;
    if(slow==fast){
        while (fast->next!=slow){
            fast=fast->next;
        }
    }
    else{
        while(slow->next!=fast->next){
            slow=slow->next;
            fast=fast->next;
        }
    }
    fast->next=NULL;
    return head;
}
int main()
{
    Node *head = NULL;
    head = insertEnd(head,10);
    head = insertEnd(head,15);
    head = insertEnd(head,5);
    head = insertEnd(head,20);
    createLoopNode(head,15);

    head = detectRemoveLoop(head); 
    printList(head); cout<<endl;
}