#include<iostream>
using namespace std;

//print natural numbers from 1 to n using recursion
void fun(int n)
{
    if(n==0)return;
    fun(n-1);
    cout<<n<<" ";
}
int main()
{
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    fun(n);
}