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
Node *insertBegin(Node *head, int key)
{
    Node *temp = new Node(key);
    temp->next=head;
    return temp;
}
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
void printList1(Node *head)
{
    Node *curr = head;
    while(curr!=NULL){
        cout<<curr->key<<" ";
        curr = curr->next;
    }
}
void printList2(Node *head)
{
    while(head!=NULL)
    {
        cout<<head->key<<" ";
        head=head->next;
    }
}
int main()
{
    //insertion at the beginning
    // Node *head=NULL;
    // head = insertBegin(head,20);
    // head = insertBegin(head,5);
    // head = insertBegin(head,10);
    // printList1(head); cout<<endl;
    // printList2(head); cout<<endl;
    
    //insertion at the end
    Node *head = NULL;
    head = insertEnd(head,10);
    head = insertEnd(head,5);
    head = insertEnd(head,20);
    printList1(head);
}