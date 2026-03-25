#include<iostream>
using namespace std;

//print the sum of all the digits in a given number using recursion.
int fun(int n)
{
    if(n<10)return n;
    return fun(n/10)+n%10;
}
int main()
{
    cout<<fun(253);
}