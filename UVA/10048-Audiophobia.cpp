// C Program for Floyd Warshall Algorithm
#include<stdio.h>
#include<iostream>
using namespace std;

#define INF 99999

int c,s,q;
int d[5000][5000];



void print()
{
    for(int i=1;i<=c;i++)
    {
        for(int j=1;j<=c;j++)
        {
           cout<<d[i][j]<<" ";
        }
        cout<<endl;
    }
}
int main()
{

    int cases=0;

    while(cin>>c>>s>>q &&!(c==0&&s==0&&q==0))
    {
        for(int i=1;i<=c;i++)
        {
            for(int j=1;j<=c;j++)
            {
                d[i][j]=INF;
            }
        }

        for(int i=1;i<=c;i++)d[i][i]=0;

        for(int i=1;i<=s;i++)
        {
            int x,y,z;
            cin>>x>>y>>z;
            d[x][y]=z;
            d[y][x]=z;
        }

        for(int k=1;k<=c;k++)
        {
            for(int i=1;i<=c;i++)
            {
                for(int j=1;j<=c;j++)
                {
                    d[i][j]=min(d[i][j],max(d[i][k],d[k][j]));
                }
            }
        }

        if(cases!=0)cout<<endl;
        cout<<"Case "<<"#"<<++cases<<endl;
        for(int i=0;i<q;i++)
        {
            int x,y;
            cin>>x>>y;
            if(d[x][y]<INF)cout<<d[x][y]<<endl;
            else cout<<"no path"<<endl;
        }
    }

    return 0;
}

