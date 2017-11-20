#include<cstdio>
#include<iostream>
using namespace std;
int main()
{

	int n, a, b,count=0,cnt=0,start,end;
	cin >> n >> a >> b;
	start = a;
	if (b > 0)
	{
		for (int i = 1; i <= b; i++)
		{

			start++;
			if (start > n)
			{
				start = 1;
			}
		}
	}
	else
	{
		end = abs(b);
		for (int i = 1; i <=end ; i++)
		{

			start--;
			if (start ==0)
			{
				start = n;
			}
		}
	}
	
	cout <<start << endl;
	return 0;
}
