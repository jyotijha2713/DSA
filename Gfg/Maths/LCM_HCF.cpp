#include<iostream>
using namespace std;

//a*b = LCM*HCF
int HCF(int a,int b)
{
    while(a!=0){
        int temp = a;
        a = b%a;
        b = temp;
    }
    return b;
}
int LCM(int a,int b)
{
    return (a*b)/HCF(a,b);
}
int main()
{
    int x= LCM(4,6);
    cout<<x<<endl;
    int y = HCF(4,10);
    cout<<y<<endl;
}