#include<algorithm>
#include<vector>
#include<iostream>
using namespace std;
int main()
{

    int n;
    vector<int>arr;
    vector<int>set1;
    vector<int>set2;
    vector<int>set3;
    vector<int>negative;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int tem;
        cin>>tem;
        arr.push_back(tem);
        if(tem<0)negative.push_back(tem);
    }
    sort(arr.begin(),arr.end());
    int start=0;
    if(negative.size()>0)
    {
        set1.push_back(arr[0]);
        start=1;
    }
    if((negative.size()-1)%2==0)
    {
        for(int i=start;i<negative.size();i++)
        {
            set2.push_back(arr[i]);
        }
    }
    else
    {
        set3.push_back(arr[start]);
        start++;
        for(int i=start;i<negative.size();i++)
        {
            set2.push_back(arr[i]);
        }
    }
         


    for(int i=start;i<arr.size();i++)
    {
        if(arr[i]>0)set2.push_back(arr[i]);
        else if(arr[i]==0)set3.push_back(arr[i]);
    }
    cout<<set1.size()<<" ";
    for(int i=0;i<set1.size();i++)
    {
        cout<<" "<<set1[i];
    }
    cout<<endl;

    cout<<set2.size()<<" ";
    for(int i=0;i<set2.size();i++)
    {
        cout<<" "<<set2[i];
    }
    cout<<endl;

    cout<<set3.size()<<" ";
    for(int i=0;i<set3.size();i++)
    {
        cout<<" "<<set3[i];
    }
    cout<<endl;
    return 0;
}

