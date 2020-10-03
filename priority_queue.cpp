#include<iostream>
#include<queue>
using namespace std;
int main()
{
    priority_queue<int,vector<int>,greater<int>> pq; //min heap--elements in increasing order of priority
    priority_queue<int> pq;//max heap--
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int no;
        cin>>no;
        pq.push(no);
    }
    for(int i=0;i<n;i++)
    {
        cout<<pq.top()<<" ";
        pq.pop();
        
    }
    return 0;
}