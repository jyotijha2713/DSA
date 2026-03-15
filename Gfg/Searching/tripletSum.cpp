#include<iostream>
using namespace std;

void sumPresent(int a[],int n,int x)
{
    int i,j,k;
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            for(k=j+1;k<n;k++){
                if(a[i]+a[j]+a[k]==x){
                    cout<<"Yes"<<endl;
                    return;
                }
            }
        }
    }
    cout<<"No"<<endl;
    return;
}
bool isPair(int a[],int left,int right,int x)
{
    int i;
    while(left<right)
    {
        if(a[left]+a[right]==x) return 1;
        else if(a[left]+a[right]>x) right--;
        else left++;
    }
    return 0;
}
bool isTriplet(int a[],int n,int x)
{
    int i;
    for(i=0;i<n;i++){
        if(isPair(a,i+1,n,x-a[i]))
            return 1;
    }
    return 0;
}
int main()
{
    int a[7]={2,3,4,8,9,20,40}, x=32;
    sumPresent(a,7,x);
    cout<<isTriplet(a,7,x);
}