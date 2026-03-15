#include<iostream>
using namespace std;
//naive approach:  O(n^2)
bool isSum(int a[],int n, int givenSum)
{
    int i,j;
    for(i=0;i<n;i++)
    {
        int sum=0;
        for(j=i;j<n;j++){
            sum+=a[j];
            if(sum==givenSum)return 1;
        }
    }
    return 0;
}
//WindowSliding approach:  O(n)
bool searchSum(int a[],int n,int sum)
{
    int curr_sum=a[0],start=0, end;
    for(end=1;end<n;end++){
        //clear the previous window
        while(curr_sum>sum && start<end-1){
            curr_sum -= a[start];
            start++;
        }
        if(curr_sum==sum)return 1;
        if(end<n) curr_sum +=a[end];
    }
    return (curr_sum==sum);
}
int main()
{
    int n;
    cout<<"Enter the size of the array: ";
    cin>>n;
    int a[n],i;
    cout<<"Enter the values of the array: ";
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    int sum;
    cout<<"Enter the sum to be searched: ";
    cin>>sum;
    cout<<isSum(a,n,sum)<<endl;
    cout<<searchSum(a,n,sum);
}