#include<iostream>
using namespace std;

int binarySearch(int a[],int n,int x)
{
    int l=0, r=n-1;
    int mid;
    while(l<=r)
    {
        mid = l + (r-l)/2;
        if(x==a[mid]) return mid;
        
        if(x<a[mid]) r = mid-1;
        else l = mid+1;
    }
    return -1;
}

int main()
{
    int a[9]={1,2,6,9,10,14,18,21,28};
    int n = sizeof(a)/sizeof(a[0]);
    cout<<binarySearch(a,n,200);
}
