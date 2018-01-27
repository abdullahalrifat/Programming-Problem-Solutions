#include <iostream>
#include<vector>
#include<map>
#include<string>
using namespace std;

int main()
{
    vector<string>name;
    map<string,int>arr;
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        string temp;
        cin>>temp;
        name.push_back(temp);
    }
    for(int i=n-1;i>=0;i--)
    {
        string temp=name[i];
        if(!arr[temp])
        {
            cout<<temp<<endl;
        }
        arr[temp]=1;
    }
    return 0;
}