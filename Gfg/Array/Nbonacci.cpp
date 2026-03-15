#include<iostream>
using namespace std;

void Nbonacci(int n,int m)
{
    int i,sum=0,a[m];
    for(i=0;i<n;i++){
        if(i==n-1) a[i]=1;
        else a[i]=0;
        sum+=a[i];
    }
    for(i=n;i<m;i++){
        a[i] = sum;
        sum += (a[i]-a[i-n]);
    }
    for(i=0;i<m;i++){
        cout<<a[i]<<" ";
    }
}
int main()
{
    int n,m;
    cout<<"Enter the value of n and m: ";
    cin>>n>>m;
    Nbonacci(n,m);
}