#include<iostream>
#include<string>
using namespace std;

//Given a string print all subsets of it(in any order)
void printSubStr(string str, string curr="",int index=0)
{
    if(index==str.length()){
        cout<<curr<<" ";
        return;
    }
    printSubStr(str,curr,index+1);
    printSubStr(str,curr+str[index],index+1);
}
int main()
{
    printSubStr("ABC");
}