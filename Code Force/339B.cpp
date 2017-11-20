#include<cstdio>
#include<vector>
#include<iostream>
using namespace std;
int main()
{

    int n,m;
    vector<int>arr;
    cin>>n>>m;
    for(int i=0;i<m;i++)
    {

        int temp;
        cin>>temp;
        arr.push_back(temp);
    }
    long long int cnt=0;
    cnt+=arr[0]-1;
    for(int i=1;i<m;i++)
    {
        int t=arr[i];
        if(arr[i-1]>arr[i])
        {
            cnt+=((n-arr[i-1])+t);
        }
        else
        {
            cnt+=(arr[i]-arr[i-1]);
        }
    }
    cout<<cnt<<endl;
    return 0;
}

