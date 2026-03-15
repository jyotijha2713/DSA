#include<iostream>
using namespace std;

//Integer to binary conversion
int main()
{
    int n,d=0,num=0;
    cout<<"Enter a number to find its binary: ";
    cin>>n;
    while(n>0){
        d = n%2;
        num = num*10 +d;
        n = n/2;
    }
    int rev=0;
    while(num!=0){
        d = num%10;
        rev = rev*10 + d;
        num = num/10;
    }
    cout<<rev;
}