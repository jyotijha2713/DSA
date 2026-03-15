#include<iostream>
using namespace std;

void sumPresent(int a[],int n,int x)
{
    int i,j;
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if(a[i]+a[j]==x){
                cout<<"YES"<<endl;
                return;
            }
        }
    }
    cout<<"NO"<<endl;
}

bool isPair(int a[],int n,int x)
{
    int left=0,right=n-1;
    while(left<right){
        if(a[left]+a[right]==x) return 1;

        if(a[left]+a[right]>x){
            right--;
        }
        else left++;
    }
    return 0;
}
int main()
{
    int a[5]={2,5,8,12,30};
    int x=17;
    sumPresent(a,5,x);
    cout<<isPair(a,5,x)<<endl;

    int b[4]={3,8,13,18};
    int y=14;
    cout<<isPair(b,4,14);
}