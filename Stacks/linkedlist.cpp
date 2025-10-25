#include<iostream>
#include<cstdlib>
using namespace std;

struct node{
        int data;
        node* next;
};
int main()
{
    node* head; node* newnode; node* temp;
    head=NULL;
    int c=1;
    while(c!=0){
        // newnode=(node*)malloc(sizeof(node));
        newnode = new node; //C++ style of memory allocation
        cout<<"Enter data: ";
        cin>>newnode->data;
        newnode->next=NULL;

        if(head==NULL){
            head=temp=newnode;
        }
        else{
            temp->next=newnode;
            temp=newnode;
        }
        cout<<"Do you want to continue(0,1)?\n";
        cin>>c;
    }
    temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}
