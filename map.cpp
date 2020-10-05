#include<iostream>
#include<string>
#include<map>
using namespace std;
int main()
{
    map<string,int> m;
    //insert
    m.insert(make_pair("Apple",10));
    pair<string,int> p;
    p.first="Mango";
    p.second=20;
    m.insert(p);
    m["banana"]=30;
    //display
    for(auto x:m)
    {
        cout<<x.first<<" "<<x.second<<endl;
    }
    /*for(auto it=m.begin();it!=m.end();it++)
    {
        cout<<(*it).first<<" "<<(*it).second<<endl;
    }*/
    //update
    m["banana"]=40;
    for(auto x:m)
    {
        cout<<x.first<<" "<<x.second<<endl;
    }
    //serach
    string fruit;
    cin>>fruit;
    auto it=m.find(fruit);
    if(it!=m.end())
    {
        cout<<m[fruit]<<endl;
    }
    if(m.count(fruit))
    {
        cout<<m[fruit]<<endl;
    }
    //delete
    m.erase(fruit);
    //display
    for(auto x:m)
    {
        cout<<x.first<<" "<<x.second<<endl;
    }
    return 0;
}