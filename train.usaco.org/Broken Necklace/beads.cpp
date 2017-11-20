/*
ID: abdulla33
PROG: beads
LANG: C++11
*/
#include<cstdio>
#include<cstring>
#include<iostream>
#include<string>
#include<fstream>
using namespace std;
int Max_Beads(int start,int n)
{
    int j;
    for(int i=0,j=start;i<n;i++,j++)
    {
        if(j==n)
        {
            j=0;
        }
    }
}
int main()
{
    ofstream fout ("beads.out");
    ifstream fin ("beads.in");
    int n,maxBead=0,Bead;
    string necklase;
    cin>>n;
    cin>>necklase;
    for(int i=0;i<n;i++)
    {
        Bead=Max_Beads(i,n);
        if(Bead>maxBead)
        {
            maxBead=Bead;
        }
    }
    cout<<maxBead<<endl;
    return 0;
}
