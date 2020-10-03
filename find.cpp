#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int a[]={1,2,3,4,5};
    int n=sizeof(a)/sizeof(a[0]);
    int key;
    cin>>key;
    auto in=find(a,a+n,key);
    if (in-a==n)
        cout<<"Not found :"<<endl;
    else
        cout<<"Found at :"<<in-a<<endl;
    return 0;
}