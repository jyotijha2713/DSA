#include<iostream>
using namespace std;

//naive solution- O(n^2) solution
int maxSum(int a[],int n,int k)
{
    int i,j,max_sum=INT_MIN;
    for(i=0;i+k-1<n;i++){
        int sum=0;
        for(j=0;j<k;j++){
            sum+=a[i+j];
        }
        max_sum=max(max_sum,sum);
    }
    return max_sum;
}
//window sliding technique- O(n) solution.
int WindowMax(int a[],int n,int k)
{
    int i,curr_sum=0;
    for(i=0;i<k;i++){
        curr_sum+=a[i];
    }
    int max_sum=curr_sum;
    for(i=k;i<n;i++)
    {
        curr_sum+= (a[i]-a[i-k]);
        max_sum= max(max_sum,curr_sum);
    }
    return max_sum;
}
int main()
{
    int n;
    cout<<"Enter the size of the array: ";
    cin>>n;
    int a[n],k;
    cout<<"Enter the values: ";
    for(int i=0;i<n;i++)
        cin>>a[i];
    cout<<"Enter no. of elements to be traken in 1 window: ";
    cin>>k;
    cout<<"Max sum using naive approach is: "<<maxSum(a,n,k)<<endl;
    cout<<"Max sum using Window sliding approach is: "<<WindowMax(a,n,k)<<endl;
}