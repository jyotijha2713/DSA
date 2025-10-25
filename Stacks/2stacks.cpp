#include<iostream>
#include <cstdlib>
using namespace std;

struct TwoStacks{
    int* arr,cap,top1,top2;
    TwoStacks(int n){
        cap=n; top1 = -1; top2 = cap; arr= new int[n];
    }
    void push1(int x){
        if(top1<top2-1){
            top1++;
            arr[top1]=x;
            cout<<x<<" is pushed to Stack 1.\n";
        }
        else{
            cout<<"Stack overflow.\n";
        }
    }
    void push2(int x){
        if(top1<top2-1){
            top2--;
            arr[top2]=x;
            cout<<x<<" is pushed to stack 2.\n";
        }
        else{
            cout<<"Stack 2 overflow.\n";
        }
    }
    int pop1(){
        if(top1>=0){
            int x=arr[top1];
            top1--;
            cout<<x<<" is popped from the Stack 1.\n";
            return x;
        }
        else{
            cout<<"Stack 1 underflow.\n";
            exit (1);
        }
    }
    int pop2(){
        if(top2<cap){
            int x=arr[top2];
            top2++;
            cout<<x<<" is popped from the Stack 2.\n";
            return x;
        }
        else{
            cout<<"Stack 2 underflow.\n";
            exit (1);
        }
    }
};
int main()
{
    TwoStacks s(4);
    s.push1(10);
    s.push2(20);
    s.push1(30);
    s.push2(40);
    s.pop1();
    s.pop2();
}