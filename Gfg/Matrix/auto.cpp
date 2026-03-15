#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int> numbers = {1, 2, 3, 4, 5};
    for (auto it = numbers.begin(); it != numbers.end(); ++it) {
        cout<<*it<<" ";
    }
    cout<<endl;
    for(auto it=numbers.rbegin(); it!=numbers.rend(); ++it){
        cout<<*it<<" ";
    }
    cout<<endl;
    for(auto num: numbers){
        cout<<num<<" ";
    }
}