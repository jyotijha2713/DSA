#include<stdio.h>
#define size 5
int arr[size];
int top=-1,i;

void push(int element)
{
    if(top==size-1)
    {
        printf("Stack Overflow.\n");
    }
    else{
        top++;
        arr[top]=element;
        printf("%d is pushed into the stack.\n",element);
    }
    return;
}
void pop()
{
    if(top==-1){
        printf("Stack Underflow.\n");
    }
    else{
        int ele=arr[top];
        printf("%d is popped from the stack.\n",ele);
        top--;
    }
}
void peek()
{
    if(top==-1){
        printf("Stack is empty.\n");
    }
    else{
        printf("Stack elements are: ");
        for(i=top;i>=0;i--){
            printf("%d ",arr[i]);
        }
    }
}
int main()
{
    push(10);
    push(20);
    push(30);
    push(40);
    pop();
    peek();
}
