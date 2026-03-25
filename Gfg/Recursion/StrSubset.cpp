#include<iostream>
#include<string>
using namespace std;

//Given a string print all subsets of it(in any order)
void printSubSet(string str, string curr="",int index=0)
{
    if(index==str.length()){
        cout<<curr<<" ";
        return;
    }
    printSubSet(str,curr,index+1);
    printSubSet(str,curr+str[index],index+1);
}
int main()
{
    printSubSet("ABC");
}