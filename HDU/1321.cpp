#include<iostream>
#include<cstdio>
#include<cstring>
#include<string>
#include <vector>
using namespace std;
int main()
{
    int n,len;
    string str;
    cin>>n;
    getchar();
    while(n)
    {
        getline(cin,str);
        len=str.length();
        for(int i=len-1;i>=0;i--)
        {
            cout<<str[i];
        }
        cout<<"\n";
        n--;
    }

    return 0;
}
