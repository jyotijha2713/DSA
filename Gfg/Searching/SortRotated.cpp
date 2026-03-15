#include<iostream>
using namespace std;

int findMax(int a[],int l,int h)
{
    int mid = (l+h)/2;
    if(a[mid]>a[mid+1]) return a[mid];

    if(a[mid]<a[0]) return findMax(a,l,mid-1);
    else return findMax(a,mid+1,h);
}

int main()
{
    int a[7]={10,20,40,5,6,7,8};
    int b[7]={10,20,1,2,3,4,5};
    int c[7]={10,20,30,40,50,60,1};
    int l=0,h=6;
    cout<<findMax(a,l,h)<<endl;
    cout<<findMax(b,l,h)<<endl;
    cout<<findMax(c,l,h);
}