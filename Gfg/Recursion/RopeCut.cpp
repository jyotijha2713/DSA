#include<iostream>
#include<algorithm>
using namespace std;

//Given a rope of length n, find maximum number of pieces you can make such that length of every piece is in set {a,b,c} for given three values a,b and c.
int maxCuts(int n, int a, int b, int c)
{
    if(n==0)return 0;
    if(n<0)return -1;

    int res = max({maxCuts(n-a,a,b,c),maxCuts(n-b,a,b,c),maxCuts(n-c,a,b,c)});
    if(res==-1)return -1;
    return res+1;
}
int main()
{
    cout<<maxCuts(23,12,9,11);
}