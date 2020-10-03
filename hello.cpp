#include<iostream>
#include<string>
using namespace std;
int main()
{
    string s1="My name is Rittik Biswal";
    for(auto it=s1.begin();it!=s1.end();it++)
    {
        cout<<(*it)<<" ";
    }
    return 0;
}
