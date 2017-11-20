#include <iostream>
#include<string>
using namespace std;

int main()
{
    int n;
    cin>>n;
    getchar();
    while(n--)
    {
        string s;
        int m=0,f=0;
        getline(cin,s);
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='M')
            {
                m++;
            }
            else if(s[i]=='F')
            {
                f++;
            }
        }
        if(m==f&&s.size()>2)
        {
            cout<<"LOOP"<<endl;
        }
        else
        {
            cout<<"NO LOOP"<<endl;
        }
    }
    return 0;
}

