#include<iostream>
using namespace std;

//naive solution- O(n) time complexity
int directSum(int a[],int n,int l,int r)
{
    int i,sum=0;
    for(i=l;i<=r;i++)
        sum+=a[i];
    return sum;
}
//optimised solution- O(1) time complexity
int getSum(int a[],int n,int l,int r)
{
    int prefix_sum[n],i;
    prefix_sum[0]=a[0];
    for(i=1;i<n;i++){
        prefix_sum[i]= prefix_sum[i-1]+a[i];
    }
    if(l!=0)return (prefix_sum[r]-prefix_sum[l-1]);
    else return(prefix_sum[r]);
}
int main()
{
    int n;
    cout<<"Enter the size of the array: ";
    cin>>n;
    cout<<"Enter the values: ";
    int i,a[n];
    for(i=0;i<n;i++)
        cin>>a[i];
    cout<<directSum(a,n,1,3)<<endl;
    cout<<getSum(a,n,0,2)<<endl;
    cout<<getSum(a,n,1,3)<<endl;
    cout<<getSum(a,n,2,6)<<endl;
}