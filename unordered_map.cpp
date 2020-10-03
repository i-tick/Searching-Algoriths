#include<iostream>
#include<cstring>
#include<unordered_map>
using namespace std;
int main()
{
    unordered_map<int,string> um;
    //insert
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int p;
        string s;
        cin>>p>>s;
        um.insert(make_pair(p,s));
    }
    //display
    for(auto f:um)
    {
        cout<<f.first<<" "<<f.second<<endl;
    }
    return 0;
}