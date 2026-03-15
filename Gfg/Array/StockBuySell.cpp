#include<iostream>
using namespace std;

// int BuyandSell(int a[],int n)
// {
//     int i, local_max=INT_MIN, local_min=INT_MAX, profit=0;

//     for(i=0;i<n;i++){
//         local_max=0;
//         local_min=0;
//         if(i==0){
//             if(a[i]<a[i+1]){
//                 profit+=a[i+1]-a[i];
//                 i+=2;
//             }
//             else i++;
//         }
//         else if(i==n-2){
//             if(a[i]<a[i+1]){
//                 profit+=a[i+1]-a[i];
//             }
//         }
//         else{
//             if(a[i-1]>a[i]<a[i+1]){
//                 local_min=a[i];
//             }
//             if(a[i-1]<a[i]>a[i+1]){
//                 local_max=a[i];
//             }
//             profit+= local_max-local_min;
//         }
//     }
//     return profit;
// }
int BuyandSell(int a[],int n)
{
    int i, local_max=0, local_min=0, profit=0;
    for(i=0;i<n;i++)
    {
        local_max=0;
        local_min=0;
        if(i==0){
            if(a[i]<a[i+1]){
                local_min=a[i];
                i++;
                if(a[i-1]<a[i]>a[i+1]){
                    local_max=a[i];
                }
            }
        }
        if(i==n-2){
            if(a[i]<a[i+1]){
                local_max=a[i+1];
            }
        }
        if(a[i-1]>a[i]<a[i+1]){
            local_min=a[i];
        }
        if(a[i-1]<a[i]>a[i+1]){
            local_max=a[i];
        }
        profit+= local_max-local_min;
    }
    return profit;
    
}
int main()
{
    int a[5]={1,5,3,8,12};
    cout<<BuyandSell(a,5);
}