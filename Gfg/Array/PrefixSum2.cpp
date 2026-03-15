#include<iostream>
using namespace std;

//naive solution- O(n^2)
bool isEquilibrium(int a[],int n)
{
    int i,j,k;
    for(i=0;i<n;i++){
        int l_sum=0, r_sum=0;
        for(j=0;j<i;j++){
            l_sum+=a[j];
        }
        for(k=i+1;k<n;k++){
            r_sum+=a[k];
        }
        if(l_sum==r_sum)return 1;
    }
    return 0;
}
//optimised solution- O(n)
bool isEquil(int a[],int n)
{
    int pre_sum[n], suf_sum[n],i;
    prefix_sum[0]=a[0];
    for(i=1;i<n;i++){
        prefix_sum[i]= prefix_sum[i-1]+a[i];
    }
    for(i=n;i>0;i--){
        suf_sum[i] = a[i]
    }
}
int main()
{
    int n;
    cout<<"Enter the size of the array: ";
    cin>>n;
    int a[n],i;
    cout<<"Enter the values: ";
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<isEquilibrium(a,n)<<endl;
    cout<<isEquil(a,n)<<endl;
}