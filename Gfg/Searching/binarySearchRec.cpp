#include<iostream>
using namespace std;

int RecBinSearch(int a[],int l,int h,int x)
{
    if(l>h)return -1; //base case

    int mid = l + (h-l)/2;
    if(a[mid]==x) return mid;

    //Recursion
    if(a[mid]>x) 
        return RecBinSearch(a,l,mid-1,x);
    else
        return RecBinSearch(a,mid+1,h,x);
}
int main()
{
    int a[10]={1,2,10,20,55,37,92,84,48,73};
    int n = sizeof(a)/sizeof(a[0]);
    int l=0, h=n-1, x=55;
    cout<<RecBinSearch(a,l,h,x);
}