#include<iostream>
#include<set>
using namespace std;
int main()
{
    int a[]={10,20,30,20,10,10,30,30,30,30,30,30,40,60};
    multiset<int> m{a,a+6};
    for(auto x:m)
    {
        cout<<x<<" ";
    }
    //erase
    m.erase(20);
    //insert
    m.insert(80);
    cout<<endl;
    for(auto x:m)
    {
        cout<<x<<" ";
    }
    cout<<endl;
    cout<<m.count(20);
    //find
    cout<<endl;
    auto it=m.find(300);
    cout<<*it<<endl;
    //lower and upper bound
    for (auto it=m.lower_bound(10);it!=m.upper_bound(50);it++)
    cout<<*it<<" ";
    return 0;
}