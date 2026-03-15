#include<iostream>
#include<string>
#include <climits>
using namespace std;

//traversing from left
int firstRepeating(string s)
{
    int res=INT_MAX;
    int f1[256],i;
    for(i=0;i<256;i++){
        f1[i]=-1;
    }
    for(i=0;i<s.length();i++){
        if(f1[s[i]]==-1){
            f1[s[i]]=i;
        }
        else{
            res=min(res,f1[s[i]]);
        }
    }
    return(res==INT_MAX)?-1:res;
}
//traversing from right
int firstRepeat(string s)
{
    int res=INT_MAX;
    int f1[256],i;
    for(i=0;i<256;i++)
        f1[i]=-1;
    for(i=(s.length())-1;i>=0;i--){
        if(f1[s[i]]==-1)
            f1[s[i]]=i;
        else
            res=i;
    }
    return(res==INT_MAX)?-1:res;
}
int main()
{
    string s1="geeksforgeeks";
    string s2="abcd";
    cout<<"Traversing from the left"<<endl;
    cout<<firstRepeating(s1)<<endl;
    cout<<firstRepeating(s2)<<endl;
    cout<<"Traversing from right"<<endl;
    cout<<firstRepeat(s1)<<endl;
    cout<<firstRepeat(s2)<<endl;
}