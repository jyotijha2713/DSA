#include <iostream>
using namespace std;

int Factorial(int n)
{
    int i,prod=1;
    for(i=1;i<=n;i++){
        prod *= i;
    }
    return prod;
}
//using recursion
int recFact(int n)
{
    if(n==1)return 1;
    return n*recFact(n-1);
}
int Permutation(int n,int r)
{
    return Factorial(n)/Factorial(n-r);
}
int Combination(int n,int r)
{
    return recFact(n)/(recFact(r)*recFact(n-r));
}
int main()
{
    int x = Factorial(5);
    cout<<x<<endl;
    int y = recFact(7);
    cout<<y<<endl;
    cout<<Permutation(5,2)<<endl;
    cout<<Combination(5,2)<<endl;
}