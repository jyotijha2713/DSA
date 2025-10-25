#include<iostream>
#include<stack>
using namespace std;

int main()
{
    stack <int> s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    while(s.empty()==false){
        cout<<s.top()<<endl;
        s.pop();
    }
    s.pop(); //This will not get executed since the stack is already empty
}