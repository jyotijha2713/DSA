#include<iostream>
using namespace std;

struct Node{
    int data;
    Node *next;
    Node *random;
    Node(int x){
        data=x;
        next=NULL;
        random=NULL;
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
Node *find(Node *head,int x)
{
    Node *curr=head;
    while(curr!=NULL && curr->data!=x){
        curr=curr->next;
    }
    return curr;
}
void printList(Node *head)
{
    Node *temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" -> ";
        if(temp->random)
            cout<<head->random->data;
        else
            cout<<"NULL";
        cout<<endl;
        temp=temp->next;
    }
}
Node *clone(Node *head)
{
    Node *curr, *next;
    for(curr=head;curr!=NULL;){
        next = curr->next;
        curr->next = new Node(curr->data);
        curr->next->next=next;
        curr=next;
    }
    for(curr=head; curr!=NULL; curr=curr->next->next)
        curr->next->random = (curr->random!=NULL)?(curr->random->next):NULL;

    Node *h2=head->next; 
    Node *temp=h2;
    while(temp!=NULL && temp->next!=NULL){
        temp->next = temp->next->next;
        temp=temp->next;
    }
    Node *temp2=head;
    while(temp2!=NULL && temp2->next!=NULL){
        temp2->next=temp2->next->next;
    }
    return h2;
}
int main()
{
    Node *head=NULL;
    head = insertEnd(head,10);
    head = insertEnd(head,5);
    head = insertEnd(head,20);
    head = insertEnd(head,15);
    head = insertEnd(head,25);
    printList(head); cout<<endl;
    find(head,10)->random = find(head,20);
    find(head,5)->random = find(head,15);
    find(head,20)->random = find(head,10);
    find(head,15)->random = find(head,20);
    find(head,25)->random = find(head,15);

    Node *h2 = clone(head);
    printList(h2);
}