#include<iostream>
using namespace std;

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
    fun(3);
}