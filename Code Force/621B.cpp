
#include<cstdio>
#include<vector>
#include<cstring>
#include<algorithm>
#include<iostream>
using namespace std;
long long int arr[1005][1005],arr2[1005][1005];
long long int cnt=0;
int maxx=0,maxy=0;
void place(int a, int b)
{
	for (int i = 0; i < maxx; i++)
	{
	    for(int j=0;j<maxy;j++)
        {
            if(arr[i][j]==1&&i!=a&&j!=b)
            {
                if (abs(a - i) == abs(b-j))
                {
                    cnt++;
                }
            }

        }

	}
}
int main()
{
	long long int n,a,b;
    long long int ans=0;
		cin>>n;
		memset(arr,0,sizeof(arr));
		memset(arr2,0,sizeof(arr));
		for(int i=1;i<=n;i++)
		{
			cin>>a;
			if(a>maxx)maxx=a;
			cin>>b;
			if(b>maxy)maxy=b;
			arr[a][b]=1;
			arr2[a][b]=1;
		}

		for(int i=1;i<=1000;i++)
		{
			for(int j=1;j<=1000;j++)
			{
				if(arr[i][j])
                {
                    ans += 1LL*arr[i-1][j-1];
                    ans += 1LL*arr2[i-1][j+1];
                }
                arr[i][j] += arr[i-1][j-1];
                arr2[i][j] += arr2[i-1][j+1];
			}
		}
		cout<<ans<<endl;

}


