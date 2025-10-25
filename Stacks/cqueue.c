#include<stdio.h>
#define size 5
int arr[size];
int front=-1;
int rear=-1;

void enqueue(int element)
{
    if(front==0 && rear==size-1){
        printf("Queue is full.\n");
    }
    else if(front==-1 && rear==-1){
        front=rear=0;
        arr[rear]=element;
    }
    else if(front!=0 && rear==size-1){
        rear=0;
        arr[rear]=element;
    }
    else{
        rear++;
        arr[rear]=element;
    }
}
void dequeue()
{
    if(front==-1){
        printf("Queue is empty.");
    }
    else if(front==rear){
        front=rear=-1;
    }
    else if(front==size-1){
        front=0;
    }
    else{
        front++;
    }
}
void main()
{
    enqueue(10);
    enqueue(20);
    enqueue(30);
    enqueue(40);
    dequeue();
    dequeue();
}