#include<iostream>
#include<string>
using namespace std;

void printSum(string str, string curr="",int index=0)
{
    if(index==str.length()){
        cout<<curr<<" ";
        return;
    }
    printSum(str,curr,index+1);
    printSum(str,curr+str[index],index+1);
}
int main()
{
    printSum("ABC");
}