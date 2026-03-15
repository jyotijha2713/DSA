#include<iostream>
using namespace std;

void TowerOfHanoi(int n, char fromRod, char toRod, char auxRod)
{
    if(n==0)return;
    TowerOfHanoi(n-1,fromRod,auxRod,toRod);
    cout<<"Disk "<<n<<" moved from "<<fromRod<<" to "<<toRod<<endl;
    TowerOfHanoi(n-1,auxRod,toRod,fromRod);
}
int main()
{
    int n=3;
    TowerOfHanoi(n,'A','C','B');
}