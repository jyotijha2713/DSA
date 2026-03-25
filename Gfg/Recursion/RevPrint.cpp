#include<iostream>
using namespace std;

//to print natural numbers from n to 1.
void fun(int n)
{
    if(n==0)return;
    cout<<n<<" ";
    fun(n-1);
}
int main()
{
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    fun(n);
}