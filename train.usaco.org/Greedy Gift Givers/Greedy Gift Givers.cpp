/*
ID: abdulla33
PROG: gift1
LANG: C++11
*/
#include<cstdio>
#include<cstring>
#include<iostream>
#include<string>
#include<fstream>
using namespace std;
int ind(string names[],string name,int n)
{
    for(int i=0;i<n;i++)
    {
        if(names[i]==name)
        {
            return i;
        }
    }
}
int main()
{
    ofstream fout ("gift1.out");
    ifstream fin ("gift1.in");
    int n,inx,gmoney,number;
    string names[20];
    int moneys[20];
    string name;
    while(1)
    {
        memset(moneys,0,sizeof(moneys));
         fin>>n;
        if(fin.eof())
        {
           break;
        }
        for(int i=0;i<n;i++)
        {
            fin>>names[i];
        }
        for(int i=0;i<n;i++)
        {
            fin>>name;
            fin>>gmoney;
            if(gmoney>0)
            {
                inx=ind(names,name,n);
                moneys[inx]-=gmoney;
            }

            fin>>number;
            if(number>0)
            {
                moneys[inx]+=gmoney%number;
            }

            for(int i=0;i<number;i++)
            {
                fin>>name;
                inx=ind(names,name,n);
                moneys[inx]+=gmoney/number;
            }
        }
        for(int i=0;i<n;i++)
        {
            fout<<names[i]<<" ";
            fout<<moneys[i]<<endl;
        }
    }
    return 0;
}
