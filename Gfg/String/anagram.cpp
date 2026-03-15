#include<iostream>
#include<string>
using namespace std;

bool anagram(string s1,string s2)
{
    if(s1.length()!=s2.length())
        return 0;
    int count[256]={0},i;
    for(i=0;i<s1.length();i++){
        count[s1[i]]++;
    }
    for(i=0;i<s2.length();i++){
        count[s2[i]]--;
    }
    for(i=0;i<256;i++){
        if(count[i]!=0)return 0;
    }
    return 1;
}
int main()
{
    string s1="geeks";
    string s2="ekegs";
    cout<<anagram(s1,s2)<<endl;
    string s3="aabcd";
    string s4="abbcd";
    cout<<anagram(s2,s3);
}