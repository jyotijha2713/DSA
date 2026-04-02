#include<iostream>
#include<cmath>
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
    if(head==NULL)return temp;
    Node *curr=head;
    while(curr->next!=NULL){
        curr=curr->next;
    }
    curr->next=temp;
    return head;
}
void printList(Node *head)
{
    Node *curr=head;
    while(curr!=NULL){
        cout<<curr->data<<" ";
        curr=curr->next;
    }
}
int count(Node *head)
{
    int count=0;
    Node *curr=head;
    while(curr!=NULL){
        count++;
        curr=curr->next;
    }
    return count;
}
void printIntersect(Node *head1, Node *head2)
{
    int n = abs(count(head1)-count(head2));
    Node *bigHead, *smallHead;
    if(count(head1)>count(head2)){
        bigHead = head1;
        smallHead = head2;
    }
    else{
        bigHead = head2;
        smallHead = head1;
    }
    Node *Bcurr=bigHead;
    for(int i=0;i<n;i++)
        Bcurr=Bcurr->next;

    Node *Scurr=smallHead;
    while(Bcurr!=Scurr){
        Bcurr=Bcurr->next;
        Scurr=Scurr->next;
    }
    cout<<"Intersection point is: "<<Bcurr->data;
}
int main()
{
    Node *common = new Node(10);
    common->next = new Node(12);
    common->next->next = new Node(15);

    Node *head1 = new Node(5);
    head1->next = new Node(8);
    head1->next->next = new Node(7);
    head1->next->next->next = common;

    Node *head2 = new Node(9);
    head2->next = common;
    printIntersect(head1,head2);
}