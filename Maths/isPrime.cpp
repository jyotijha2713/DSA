#include <iostream>
#include<math.h>
using namespace std;

int isPrime(int n)
{
    int i;
    if(n<=1)return 0;
    if(n<=3)return 1;
    if(n%2==0 || n%3==0)return 0;
    for(i=5;i<=sqrt(n);i+=6){
        if(n%i==0 || n%(i+2)==0)
            return 0;
    }
    return 1;
}
int main()
{
    cout<<isPrime(3)<<endl;
    cout<<isPrime(4)<<endl;
    cout<<isPrime(10)<<endl;
    cout<<isPrime(11)<<endl;
}