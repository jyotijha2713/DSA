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
void printNth(Node *head, int n)
{
    if(head==NULL)return;
    Node *ref_ptr=head, *main_ptr=head;
    for(int count=0; count<n; count++){
        if(ref_ptr==NULL)
            return;
        ref_ptr = ref_ptr->next;
    }
    while(ref_ptr!=NULL){
        main_ptr = main_ptr->next;
        ref_ptr = ref_ptr->next;
    }
    cout<<main_ptr->data;
}
void printNthNode(Node *head, int n)
{
    int len=0;
    for(Node *curr=head; curr!=NULL; curr=curr->next)
        len++;
    if(len<n)return;
    Node *curr=head;
    for(int i=1; i<len-n+1; i++)
        curr=curr->next;
    cout<<curr->data;
}
void printList(Node *head)
{
    Node *temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}
int main()
{
    Node *head=NULL;
    head = insertEnd(head,10);
    head = insertEnd(head,5);
    head = insertEnd(head,15);
    head = insertEnd(head,20);
    printList(head); cout<<endl;
    int n;
    cout<<"Enter the value of n: ";
    cin>>n;
    printNth(head,n); cout<<endl;
    printNthNode(head,n);
}