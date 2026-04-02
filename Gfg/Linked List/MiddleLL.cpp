#include<iostream>
using namespace std;

struct Node{
    int data;
    Node *next;
    Node(int x)
    { data=x;}
};
Node *insertBegin(Node *head, int x)
{
    Node *temp = new Node(x);
    temp->next=head;
    head=temp;
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
void printMiddle(Node *head)
{
    int count=0;
    Node *curr=head;
    while(curr!=NULL)
    {
        count++;
        curr=curr->next;
    }
    cout<<"COUNT IS "<<count<<endl;
    Node *temp=head;
    int val = (count/2);
    while(val !=0){
            temp=temp->next;
            val--;
        }
        cout<<temp->data;
}
void printMidEle(Node *head)
{
    if(head==NULL)return;
    Node *slow=head, *fast=head;
    while(fast!=NULL && fast->next!=NULL){
        slow=slow->next;
        fast=fast->next->next;
    }
    cout<<slow->data;
}
int main()
{
    Node *head = NULL;
    head = insertBegin(head,30);
    head = insertBegin(head,25);
    head = insertBegin(head,15);
    head = insertBegin(head,20);
    head = insertBegin(head,5);
    head = insertBegin(head,10);
    printList(head);
    cout<<endl;
    printMiddle(head); cout<<endl;
    printMidEle(head);
}