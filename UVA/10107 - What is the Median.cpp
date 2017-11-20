#include <iostream>
#include<cstdio>
#include<algorithm>
#include<vector>
#include<cmath>
using namespace std;
int main()
{
    int n,cnt,mid,mid1,ans;
    vector <int> arrays;
    while(scanf("%d",&n)!=EOF)
    {
        arrays.push_back(n);
        sort(arrays.begin(),arrays.end());
        cnt=arrays.size();
        if(cnt%2==0)
        {
			if(cnt>2)
			{
				mid=cnt/2;
				mid1=mid-1;
				ans=(arrays[mid]+arrays[mid1])/2;
			}
            else
            {
                ans=(arrays[0]+arrays[1])/2;
            }

        }
        else
        {
            mid=cnt/2;
            ans=floor(arrays[mid]);
        }
        printf("%d\n",ans);
    }
    return 0;
}
