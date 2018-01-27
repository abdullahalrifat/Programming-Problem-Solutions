#include<cstdio>
#include<queue>
#include<iostream>
using namespace std;
int main()
{
    int n;

    while(true)
    {
        cin>>n;
        priority_queue<int>pq;
        int sum=0;
        if(n==0)
        {
            break;
        }
        for(int i=0;i<n;i++)
        {
            int num;
            cin>>num;
            pq.push(-num);
        }
        while(pq.size()>1)
        {
            int num=-pq.top();
            pq.pop();
            num+=-pq.top();
            pq.pop();
            sum+=num;
            pq.push(-num);
        }
        cout<<sum<<endl;
    }
}