#include<iostream>
#include<vector>
using namespace std;

int maxOcc(int L[],int R[],int n)
{
    // int arr[100]={0};
    vector<int> arr(100,0);
    
    for(int i=0;i<n;i++){
        arr[L[i]]++;
        arr[R[i]+1]--;
    }
    int maxm= arr[0],res=0;
    for(int i=1;i<100;i++){
        arr[i] +=arr[i-1];
        if(maxm<arr[i]){
            maxm=arr[i];
            res= i;
        }
    }
    return res;
}

int main()
{
    int L[4]={1,2,5,15};
    int R[4]={5,8,7,18};
    cout<<maxOcc(L,R,4)<<endl;
    return 0;
}
