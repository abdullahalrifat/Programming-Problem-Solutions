#include<cstdio>
#include<iostream>
using namespace std;
int main()
{

    int n;
    string a="I";
    string b="love";
    string c="hate";
    string d="that";
    string e="it";

    string ans="";
    cin>>n;

    if(n==1)
    {
        ans=ans+a+" "+c+" "+e;
    }
    else
    {
            for(int i=0;i<n;i++)
            {
                if(i==n-1)
                {
                    if(i%2==0)
                    {
                        ans=ans+" "+a+" "+c+" "+e;
                    }
                    else
                    {
                        ans=ans+" "+a+" "+b+" "+e;
                    }
                }
                else if(i%2==0)
                {
                    if(i==0)
                    {
                         ans=ans+a+" "+c+" "+d;
                    }
                    else
                    {
                        ans=ans+" "+a+" "+c+" "+d;
                    }

                }
                else
                {
                    ans=ans+" "+a+" "+b+" "+d;
                }

        }
    }

    cout<<ans<<endl;
    return 0;
}

