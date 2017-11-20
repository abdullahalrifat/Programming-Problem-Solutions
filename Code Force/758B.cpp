#include<iostream>
#include<string>
using namespace std;
int main()
{
    string str;
    cin>>str;
    int kr=0,kb=0,ky=0,kg=0;
    char a,b,c,d;
    int acount=0,bcount=0,ccount=0,dcount=0;
    for(int i=0;i<str.length();i+=4)
    {
        if(str[i]!='!')
        {
            a=str[i];
        }
        else
        {
            acount++;
        }
    }
    for(int i=1;i<str.length();i+=4)
    {
        if(str[i]!='!')
        {
            b=str[i];
        }
        else
        {
            bcount++;
        }
    }
    for(int i=2;i<str.length();i+=4)
    {
        if(str[i]!='!')
        {
            c=str[i];
        }
        else
        {
            ccount++;
        }
    }
    for(int i=3;i<str.length();i+=4)
    {
        if(str[i]!='!')
        {
            d=str[i];
        }
        else
        {
            dcount++;
        }
    }

    if(a=='R')
    {
        cout<<acount<<" ";
    }
    else if(b=='R')
    {
        cout<<bcount<<" ";
    }
    else if(c=='R')
    {
        cout<<ccount<<" ";
    }
    else
    {
        cout<<dcount<<" ";
    }

    if(a=='B')
    {
        cout<<acount<<" ";
    }
    else if(b=='B')
    {
        cout<<bcount<<" ";
    }
    else if(c=='B')
    {
        cout<<ccount<<" ";
    }
    else
    {
        cout<<dcount<<" ";
    }


    if(a=='Y')
    {
        cout<<acount<<" ";
    }
    else if(b=='Y')
    {
        cout<<bcount<<" ";
    }
    else if(c=='Y')
    {
        cout<<ccount<<" ";
    }
    else
    {
        cout<<dcount<<" ";
    }

    if(a=='G')
    {
        cout<<acount<<" ";
    }
    else if(b=='G')
    {
        cout<<bcount<<" ";
    }
    else if(c=='G')
    {
        cout<<ccount<<" ";
    }
    else
    {
        cout<<dcount<<" ";
    }
    return 0;
}