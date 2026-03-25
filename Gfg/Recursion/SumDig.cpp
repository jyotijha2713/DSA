#include<iostream>
using namespace std;

//print the sum of all the digits in a given number using recursion.
int fun(int n)
{
    if(n<0){
        cout<<"Invalid input. Please enter a positive integer.";
        return 0;
    }
    if(n<10)return n;
    return fun(n/10)+n%10;
}
int main()
{
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    cout<<fun(n);
}