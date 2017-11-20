#include<cstdio>
#include<cstring>
#include<vector>
#include <deque>

#include <iterator>
#include <sstream>
#include<iostream>
using namespace std;
int main()
{
    deque<char> arr;
    int n;
    cin>>n;
    vector<char>s;
    for(int i=0;i<n;i++)
    {
        char c;
        cin>>c;
        s.push_back(c);
    }
    int pos=0;
    bool ans=false;
    while(true)
    {
        if(s.size()<=0)
        {
            break;
        }
        if(s.size()%2==0)
        {
            ans=true;
        }
        else
        {
            ans=false;
        }
        if(ans==false)
        arr.push_back(s[pos]);
        else
        arr.push_front(s[pos]);

        s.erase (s.begin()+pos);
    }
    string str="";
    for (deque<char>::iterator it = arr.begin(); it!=arr.end(); ++it)
    str+=*it;
    cout<<str<<endl;

}

