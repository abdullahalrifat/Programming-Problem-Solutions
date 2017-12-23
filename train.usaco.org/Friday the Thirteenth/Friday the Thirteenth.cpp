/*
ID: abdulla33
PROG: friday
LANG: C++11
*/
#include<cstdio>
#include<cstring>
#include<iostream>
#include<string>
#include<map>
#include<vector>
#include<fstream>
using namespace std;
bool is_leapyear(int year)
{
    if (year % 100 == 0 )
    {
        if(year%400==0)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
	else
    {
        if(year%4==0)
        {
            return true;
        }
        else
        {
            return false;
        }
    }

}

int main()
{
    ofstream fout ("friday.out");
    ifstream fin ("friday.in");
    int n,n_count=2,in;
    bool ans=true;
    map<string,int> m;
    string names[7]={"saturday","sunday","monday","tuesday","wednesday","thursday","friday"};
    fin>>n;
    n=1900+(n-1);
    for(int i=1900;i<=n;i++)
    {
        ans=is_leapyear(i);
        for(int j=1;j<=12;j++)
        {

                if(j==4||j==6||j==9||j==11)
                {
                    for(int k=1;k<=30;k++)
                    {
                        if(k==13)
                        {
                            m[names[n_count]]++;
                        }
                        n_count++;
                        if(n_count>6)
                        n_count=0;
                    }
                }
                else if(j==1||j==3||j==5||j==7||j==8||j==10||j==12)
                {
                    for(int k=1;k<=31;k++)
                    {
                        if(k==13)
                        {
                            m[names[n_count]]++;
                        }
                        n_count++;
                        if(n_count>6)
                        n_count=0;
                    }
                }
                else if(j==2&&ans==true)
                {
                    for(int k=1;k<=29;k++)
                    {
                        if(k==13)
                        {
                            m[names[n_count]]++;
                        }
                        n_count++;
                        if(n_count>6)
                        n_count=0;
                    }
                }
                else
                {
                    for(int k=1;k<=28;k++)
                    {
                        if(k==13)
                        {
                            m[names[n_count]]++;
                        }
                        n_count++;
                        if(n_count>6)
                        n_count=0;
                    }
                }
        }
    }
    fout<<m["saturday"]<<" "<<m["sunday"]<<" "<<m["monday"]<<" "<<m["tuesday"]<<" "<<m["wednesday"]<<" "<<m["thursday"]<<" "<<m["friday"]<<endl;
    return 0;
}
