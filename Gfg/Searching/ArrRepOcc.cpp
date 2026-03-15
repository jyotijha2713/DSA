#include<iostream>
using namespace std;

int LeftOcc(int a[],int l,int h,int x)
{
    if(l>h) return -1;
    int mid = (l+h)/2;
    if((a[mid]==x) && (mid==0 || a[mid-1]!=x)) return mid;

    if(a[mid]>=x) return LeftOcc(a,l,mid-1,x);
    else return LeftOcc(a,mid+1,h,x);
}

int main()
{
    int a[5]={2,2,3,3,3},x=3;
    int n = sizeof(a)/sizeof(a[0]);
    int l=0, h=n-1;
    cout<<LeftOcc(a,l,h,x);
}