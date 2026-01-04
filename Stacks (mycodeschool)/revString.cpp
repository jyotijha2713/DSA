#include<iostream>
#include<stack>
#include<cstring>
using namespace std;

void Reverse(char *c, int n)
{
    stack <char> s;
    int i;
    for(i=0;i<n;i++){ //for pushing elements into the stack
        s.push(c[i]);
    }
    for(i=0;i<n;i++){
        c[i]=s.top();
        s.pop();
    }
}
int main()
{
    char c[51];
    printf("Enter a string: ");
    // fgets(c,51,stdin);
    cin.getline(c, 51);
    Reverse(c,strlen(c));
    printf("%s",c);
}