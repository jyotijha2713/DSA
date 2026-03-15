#include<iostream>
using namespace std;

int searchSum(int a[],int n,int k, int sum)
{
    int i,curr_sum=0;
    for(i=0;i<k;i++)
        curr_sum+=a[i];
    if(curr_sum==sum)return 1;
    for(i=k;i<n;i++)
    {
        curr_sum+=(a[i]-a[i-k]);
        if(curr_sum==sum)return 1;
    }
    return 0;
}
int main()
{
    int n,k;
    cout<<"Enter the size of the array: ";
    cin>>n;
    cout<<"Size of subarray: ";
    cin>>k;
    int a[n],sum;
    cout<<"Enter the values: ";
    for(int i=0;i<n;i++)
        cin>>a[i];
    cout<<"Sum to be searched for: ";
    cin>>sum;
    cout<<searchSum(a,n,k,sum);
}