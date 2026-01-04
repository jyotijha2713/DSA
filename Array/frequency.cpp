#include<iostream>
using namespace std;

int freq(int a[],int n)
{
    int b[n]={0},i;
    for(i=0;i<n;i++){
        b[a[i]]++;
    }
    int maxm=0,I;
    for(i=0;i<n;i++){
        if(b[i]>maxm){
            maxm=b[i];
            I=i;
        }
    }
    return a[I];
}
int main()
{
    int a[6]={1,2,3,4,4,5};
    cout<<"The most frequently occuring value is: "<<freq(a,6);
}