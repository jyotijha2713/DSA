#include<iostream>
using namespace std;

//print natural numbers from 1 to n then from n to 1.
void fun(int n)
{
    if(n<1) return;

    else{
        cout<<n<<" ";
        fun(n-1);
        cout<<n<<" ";
    }
}
int main()
{
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    fun(n);
}