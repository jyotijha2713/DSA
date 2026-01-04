#include<iostream>
#include<limits.h>
#include<math.h>
using namespace std;

int RainWaterTrap(int a[],int n)
{
    int lmax =INT_MIN, rmax =INT_MIN, i,sum=0;
    int left_max[n], right_max[n];
    for(i=0;i<n;i++){
        if(lmax<a[i]){
            lmax=a[i];
        }
        left_max[i]=lmax;
    }
    for(i=n-1;i>=0;i--){
        if(rmax<a[i]){
            rmax=a[i];
        }
        right_max[i]=rmax;
    }
    for(i=0;i<n;i++)
    {
        sum+= min(left_max[i],right_max[i])-a[i];
    }
    return sum;
}
int main()
{
    int n;
    cout<<"Size of the array: ";
    cin>>n;
    int a[n],i;
    cout<<"Enter the values: ";
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<RainWaterTrap(a,n);
}