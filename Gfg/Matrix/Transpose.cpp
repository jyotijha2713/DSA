#include<iostream>
using namespace std;

int main()
{
    int mat[][3]={
            {1,2,3},
            {7,8,9},
            {11,12,13}
        };
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            if(i==j){
                cout<<mat[i][j]<<" ";
            }
            else{
                cout<<mat[j][i]<<" ";
            }
        }
    }
}