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
Node *segregate2(Node *head)
{
    Node *last=head;
    while(last->next!=NULL)
        last=last->next;
    Node *curr=head, *prev=NULL, *next, *newLast=last;
    while(curr!=last && curr!=NULL && curr->next!=NULL){
        next=curr->next;
        if(curr->data%2!=0){
            //removing curr
            if(curr==head)
                head=next;
            else
                prev->next=next;

            //move curr to the end
            newLast->next=curr;
            curr->next=NULL;
            newLast=curr;
        }
        else prev=curr;
        curr=next;
    }
    // while(curr!=last){
    //     if(curr->data%2 != 0){
    //         insertEnd(head,curr->data);
    //         if(curr==head)head=curr->next;
    //         else{
    //             curr->data=curr->next->data;
    //             curr->next=curr->next->next;
    //         }
    //     }
    //     curr=curr->next;
    // }
    return head;
}
int main()
{
    Node *head=NULL;
    head = insertEnd(head,17);
    head = insertEnd(head,15);
    head = insertEnd(head,8);
    head = insertEnd(head,12);
    head = insertEnd(head,10);
    head = insertEnd(head,5);
    head = insertEnd(head,4);
    printList(head); cout<<endl;
    head =segregate2(head);
    printList(head);
}