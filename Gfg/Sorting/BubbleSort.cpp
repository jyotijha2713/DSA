#include<iostream>
using namespace std;

void bubbleSort(int a[],int n)
{
    int i,j,temp;
    for(i=0;i<n-1;i++){
        for(j=0;j<n-1;j++){
            if(a[j]>a[j+1]){
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
}
int main()
{
    int a[4]={20,10,5,15};
    bubbleSort(a,4);
    for(int i=0;i<4;i++){
        cout<<a[i]<<" ";
    }
}