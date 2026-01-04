#include<iostream>
#include<limits.h>
using namespace std;

void Leaders(int a[],int n)
{
    int i, max =INT_MIN;
    cout<<"Leaders in the given array are: ";
    for(i=n-1;i>=0;i--){
        if(max<a[i]){
            max=a[i];
            cout<<max<<" ";
        }
    }
}
int main()
{
    int n;
    cout<<"Enter size of the array: ";
    cin>>n;
    cout<<"Enter the elements: ";
    int a[n],i;
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    Leaders(a,n);
}