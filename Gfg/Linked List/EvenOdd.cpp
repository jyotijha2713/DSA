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
Node *segregate(Node *head)
{
    Node *eS=NULL, *eE=NULL, *oS=NULL, *oE=NULL;
    for(Node *curr=head; curr!=NULL; curr=curr->next)
    {
        int x=curr->data;
        if(x%2==0){
            if(eS==NULL){
                eS=curr;
                eE=eS;
            }
            else{
                eE->next=curr;
                eE=eE->next;
            }
        }
        else{
            if(oS==NULL){
                oS=curr;
                oE=oS;
            }
            else{
                oE->next=curr;
                oE=oE->next;
            }
        }
    }
    if(oS==NULL || eS==NULL)return head;
    eE->next=oS;
    oE->next=NULL;
    return eS;
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
    head = segregate(head);
    printList(head); cout<<endl;
}