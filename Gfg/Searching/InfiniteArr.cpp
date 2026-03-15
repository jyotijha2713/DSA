#include<iostream>
using namespace std;

int binarySearch(int a[],int l,int h,int x)
{
    if(l>h)return -1;

    int mid = l + (h-l)/2;
    if(a[mid]==x) return mid;
    
    if(a[mid]>x) 
        return binarySearch(a,l,mid-1,x);
    else
        return binarySearch(a,mid+1,h,x);
}
int findInInfArr(int a[],int n,int x)
{
    if(a[0]==x)return 0;
    int i=1;
    while(a[i]<x){
        i=i*2;
    }
    if(a[i]==x) return i;
    else return binarySearch(a,i/2,i,x);
}
int main()
{
    int a[20]={10,20,25,50,70,80,100,120,130,135,137,140,172,196,200,214,230,250,265,284};
    int x= 120;
    cout<<findInInfArr(a,20,x);
}