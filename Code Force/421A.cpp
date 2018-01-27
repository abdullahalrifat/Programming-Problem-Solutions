#include<cstdio>
#include<vector>
#include<iostream>
using namespace std;
int main()
{
    int n,a,b;
    vector<int>arthur;
    vector<int>alex;
    vector<int>finalarr;
    cin>>n>>a>>b;
    for(int i=0;i<n;i++)
    {
        finalarr.push_back(0);
    }
    for(int i=0;i<a;i++)
    {
        int temp;
        cin>>temp;
        arthur.push_back(temp);
        finalarr[temp-1]=1;
    }
    for(int i=0;i<b;i++)
    {
        int temp;
        cin>>temp;
        alex.push_back(temp);
        if(finalarr[temp-1]==0)
        {
            finalarr[temp-1]=2;
        }
    }
    for(int i=0;i<n;i++)
    {
        cout<<finalarr[i]<<" ";
    }
    cout<<endl;
    return 0;
}