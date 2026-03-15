#include<iostream>
using namespace std;
void rev(int *a,int i,int j,int n)
{
    int I;
    for(I=i;I<=j;I++){
        while(i<j){
            swap(a[i],a[j]);
            i++;
            j--;
        }
    }
}
void rotate(int *a,int n,int d)
{
    rev(a,0,d-1,n);
    rev(a,d,n-1,n);
    rev(a,0,n-1,n);
}
int main()
{
    int n;
    cout<<"How many elements? ";
    cin>>n;
    int a[n],i,d;
    cout<<"Enter the values: ";
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<"How many rotations?";
    cin>>d;
    rotate(a,n,d);
    for(i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
}