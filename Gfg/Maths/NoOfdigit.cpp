#include <iostream>
#include <math.h>
using namespace std;
//iterative solution
int countDigit(int n)
{
    int count = 0;
    while(n!=0){
        n=n/10;
        count++;
    }
    return count;
}
//recursive solution
int recCount(int n)
{
    if (n==0){
        return 0;
    }
    return 1+recCount(n/10);
}
//logarithmic solution
int logCount(int n)
{
    return floor(log10(n)+1);
}
int main()
{
    cout<<countDigit(123)<<endl;
    cout<<recCount(123)<<endl;
    cout<<logCount(123);
}