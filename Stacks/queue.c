#include<stdio.h>
#define size 5
int arr[size];
int front=-1; int rear=-1;

void enqueue(int element)
{
    if(rear==size-1){
        printf("Queue full");
    }
    else if(front==-1 && rear==-1){
        front=rear=0;
        arr[rear]=element;
    }
    else{
        rear++;
        arr[rear]=element;
    }
}
void dequeue()
{
    if(front==-1 || front>rear){
        printf("Queue is empty");
    }
    else{
        int del=arr[front];
        printf("%d is deleted from the queue.\n",del);
        front++;
    }
}
void display()
{
    if(front==-1 || front>rear){
        printf("Queue is empty.\n");
    }
    else{
        printf("Elements of the queue are: ");
        for(int i=front;i<=rear;i++){
            printf("%d ",arr[i]);
        }
        printf("\n");
    }
}
void main()
{
    enqueue(10);
    enqueue(20);
    enqueue(30);
    enqueue(40);
    enqueue(50);
    display();
    dequeue();
    display();
}