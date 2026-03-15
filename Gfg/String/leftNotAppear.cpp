#include<iostream>
#include<string>
using namespace std;

int findNotRepeating(string str)
{
    int f[256],i;
    for(i=0;i<256;i++)
        f[i]=-1;
    for(i=0;i<str.length();i++)
    {
        if(f[str[i]]!=-1)
            continue;
    }
    for(i=0;i<256;i++){
        if(f[str[i]]==-1){
            return i;
        }
    }
}
int main()
{
    string s ="geeksforgeeks";
    cout<<findNotRepeating(s);
}