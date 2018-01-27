//
// Created by abdullah on 2/9/17.
//

#include <iostream>
#include <cstdio>
#include <cmath>
#include<vector>

using namespace std;
vector<long long int>arr;
vector<long long int>arr2;
vector<long long int>arr3;
vector<long long int>arr4;
vector<long long int>arr5;
vector<long long int>arrf;
vector<long long int>times;
int main()
{
    long long int k1,k2,k3;
    long long int t1,t2,t3;
    long long int n,ans=0;
    cin>>k1>>k2>>k3;
    cin>>t1>>t2>>t3;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        long long int temp;
        cin>>temp;
        arr.push_back(temp);
        arrf.push_back(temp);
        arr2.push_back(0);
        arr3.push_back(0);
        arr4.push_back(0);
        arr5.push_back(0);
        times.push_back(0);
    }
    for(int i=0;i<n;i++)
    {
        arr2[i]+=arr[i]+t1;
        long long int j=i+k1;
        if(j>n)continue;
        long long int temp=(t1-(arr[j]-arr[i]));
        if(temp>=0)arr[j]+=temp;
    }
    for(int i=0;i<n;i++)
    {
        arr3[i]+=arr2[i]+t2;
        long long int j=i+k2;
        if(j>n)continue;
        long long int temp=(t2-(arr2[j]-arr2[i]));
        if(temp>=0)arr2[j]+=temp;
    }
    for(int i=0;i<n;i++)
    {
        arr4[i]+=arr3[i]+t3;
        long long int j=i+k3;
        if(j>n)continue;
        long long int temp=(t3-(arr3[j]-arr3[i]));
        if(temp>=0)arr3[j]+=temp;
    }
    for(int i=0;i<n;i++)
    {
        times[i]+=arr4[i]-arrf[i];
        ans=max(ans,times[i]);
    }
    cout<<ans<<endl;
    return 0;
}
