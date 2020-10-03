#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int a[]={10,20,30,40,40,40,50};
    int n=sizeof(a)/sizeof(a[0]);
    auto it=binary_search(a,a+n,40);
    cout<<it-a<<endl;
    return 0;
}
