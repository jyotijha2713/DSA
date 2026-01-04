#include<iostream>
using namespace std;

void rev(int *a,int n)
{
    int low=0,high=n-1;
    while(low<high)
    {
        swap(a[low],a[high]);
        low++;
        high--;
    }
}
int main()
{
    int i;
    int a[5] = {10,20,30,40,50};
    rev(a,5);
    for(i=0;i<5;i++){
        cout<<a[i]<<" ";
    }
}