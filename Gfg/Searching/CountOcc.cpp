#include<iostream>
using namespace std;

int LeftBinary(int a[],int l,int h,int x)
{
    if(l>h) return -1;
    int mid = (l+h)/2;
    if((a[mid]==x) &&(mid==0 || a[mid-1]!=x)) return mid;

    if(a[mid]>=x) return LeftBinary(a,l,mid-1,x);
    else return LeftBinary(a,mid+1,h,x);
}
int RightBinary(int a[],int l,int h,int x,int n)
{
    if(l>h) return -1;
    int mid = (l+h)/2;
    if((a[mid]==x) && (mid=(n-1) || a[mid+1]!=x)) return mid;

    if(a[mid]>x) return RightBinary(a,l,mid-1,x,n/2);
    else return RightBinary(a,mid+1,h,x,n/2);
}
int main()
{
    int a[5]={2,3,3,3,3},x=3;
    int n = sizeof(a)/sizeof(a[0]);
    int l=0,h=n-1;
    int i = LeftBinary(a,l,h,x);
    int j = RightBinary(a,l,h,x,n);

    if(i==-1 || j==-1) cout<<0;
    else cout<<j-i+1<<endl;
    cout<<j<<endl<<i;
}