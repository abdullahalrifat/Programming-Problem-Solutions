/*
ID: abdulla33
PROG: ride
LANG: C++11
*/
#include<cstdio>
#include<cstring>
#include<iostream>
#include<string>
#include<fstream>
using namespace std;
int main()
{
    ofstream fout ("ride.out");
    ifstream fin ("ride.in");
    char  a[10],b[10];
    int sum1,sum2,i,j,k,n;
    fin >> a >> b;
    sum1=1;
    sum2=1;
    n=strlen(a);
    for(j=0,k=1;j<n;j++)
    {
        i='A';
        k=1;
        while(a[j]!=i)
        {
            i++;
            k++;
        }
        sum1=sum1*k;
    }
    sum1=sum1%47;
    n=strlen(b);
    for(j=0,k=1;j<n;j++)
    {
        i='A';
        k=1;
        while(b[j]!=i)
        {
            i++;
            k++;
        }
        sum2=sum2*k;
    }
    sum2=sum2%47;
    if(sum1==sum2)
        {
            fout<<"GO"<<endl;
        }
        else
        {
            fout<<"STAY"<<endl;
        }
    return 0;
}
