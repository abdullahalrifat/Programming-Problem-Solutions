#include<cstring>
#include<string>
#include<iostream>
using namespace std;
int arr[110][110];
int cont[110][110];
int n,m;

int cnt(int x,int y)
{
    int i=0,j=0,k=0,l=0;
    if(cont[x][y]!=-1)return cont[x][y];
    if(arr[x-1][y]<arr[x][y]&&x!=0)
    {
        i=cnt(x-1,y)+1;
    }
    if(arr[x][y-1]<arr[x][y]&&y!=0)
    {
        j=cnt(x,y-1)+1;
    }
    if(arr[x+1][y]<arr[x][y]&&x!=n-1)
    {
        k=cnt(x+1,y)+1;
    }
    if(arr[x][y+1]<arr[x][y]&&y!=m-1)
    {
        l=cnt(x,y+1)+1;
    }

    return cont[x][y]=max (i, max (j, max (k, l)));
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string name;
        cin>>name;
        cin>>n>>m;
        memset(cont,-1,sizeof(cont));
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                cin>>arr[i][j];
            }
        }
        int len=0;
        int mx=-2147483647;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                len=cnt(i,j);
                if(len>mx)mx=len;
            }
        }
        cout<<name<<": "<<mx+1<<endl;

    }
    return 0;
}
