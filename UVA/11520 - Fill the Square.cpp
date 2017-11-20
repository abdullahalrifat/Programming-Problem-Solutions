#include<cstdio>
#include<iostream>
using namespace std;
int main()
{
	int t,n;
	char ch[20][20],x;
	cin>>t;
	for(int k=1;k<=t;k++)
	{
		cin>>n;
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<n;j++)
			{
				cin>>ch[i][j];
			}
		}
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<n;j++)
			{
				for(int x='A';x<='Z';x++)
				{
					if(ch[i][j]=='.'&&ch[i+1][j]!=x&&ch[i-1][j]!=x&&ch[i][j+1]!=x&&ch[i][j-1]!=x)
					{
						ch[i][j]=x;
					}
				}
			}
		}
		printf("Case %d:\n",k);
		for(int i=0;i<n;i++)
		{

			for(int j=0;j<n;j++)
			{
				cout<<ch[i][j];
			}
			cout<<endl;
		}
	}
	return 0;
}
