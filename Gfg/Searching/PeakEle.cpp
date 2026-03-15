#include<iostream>
using namespace std;

int findPeak(int a[],int l,int h)
{
    int mid = (l+h)/2;
    if(a[mid]>a[mid+1] && a[mid-1]<a[mid]) return a[mid];

    if(a[mid]<a[mid+1]) return findPeak(a,mid+1,h);
    else return findPeak(a,l,mid-1);
}

int main()
{
    int a[7]={10,20,15,5,23,90,67};
    int l1=0, h1=6;
    cout<<findPeak(a,l1,h1)<<endl;

    // int b[5]={5,10,15,20,7};
    int b[5]={1,2,3,4,5};
    int l2=0, h2=4;
    cout<<findPeak(b,l2,h2);
}