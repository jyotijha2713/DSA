#include<iostream>
using namespace std;

struct Node{
    int data;
    Node* next;
};

Node* insertAtEnd(Node* head, int data){
    Node* newNode = new Node();
    newNode->data = data;
    newNode->next = NULL;
    if(head == NULL){
        head = newNode;
    }
    else{
        Node* temp = head;
        while(temp->next != NULL){
            temp = temp->next;
        }
        temp->next = newNode;
    }
    return head;
}

void printList(Node* head){
    for(Node* temp = head; temp != NULL; temp = temp->next){
        cout << temp->data << " ";
    }
    cout << endl;
}

Node* reverseList(Node* head){
    Node* prev = NULL;
    Node* current = head;
    Node* next = NULL;
    while(current != NULL){
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
    }
    head = prev;
    return head;
}

int main()
{
    Node* head = NULL;
    head = insertAtEnd(head, 1);
    head = insertAtEnd(head, 2);
    head = insertAtEnd(head, 3);
    head = insertAtEnd(head, 4);
    head = insertAtEnd(head, 5);
    printList(head);
    head = reverseList(head);
    printList(head);
}