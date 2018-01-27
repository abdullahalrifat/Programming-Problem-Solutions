#include<cstdio>
#include<vector>
#include<iostream>
using namespace std;

int main()
{
    int n,cnt=0;
    vector<int>arr;
    cin>>n;
    for(int i=0;i<1000;i++)
    {
        ++cnt;
        if(cnt>999)
        {
            int temp=cnt;
            int a=temp%10;
            temp/=10;
            int b=temp%10;
            temp/=10;
            int c=temp%10;
            temp/=10;
            int d=temp%10;
            temp/=10;
            arr.push_back(d);
            arr.push_back(c);
            arr.push_back(b);
            arr.push_back(a);
        }
        else if(cnt>99)
        {
            int temp=cnt;
            int a=temp%10;
            temp/=10;
            int b=temp%10;
            temp/=10;
            int c=temp%10;
            temp/=10;
            arr.push_back(c);
            arr.push_back(b);
            arr.push_back(a);
        }
        else if(cnt>9)
        {
            int temp=cnt;
            int a=temp%10;
            temp/=10;
            int b=temp%10;
            temp/=10;
            arr.push_back(b);
            arr.push_back(a);
        }
        else
        {
            arr.push_back(cnt);
        }
    }
    cout<<arr[n-1]<<endl;
}
