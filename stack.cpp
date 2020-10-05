#include<iostream>
#include<stack>
#include<algorithm>
using namespace std;
int main()
{
    stack<int> s;
    for (int i=0;i<10;i++)
    {
        s.push(i);
    }
    //display
    for(int i=0;i<10;i++)
    {
        cout<<s.top()<<" ";
        s.pop();
    }
    return 0;
}