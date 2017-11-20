#include<cstdio>
#include<algorithm>
#include<iostream>
using namespace std;

int main()
{
	int a,b,counts=0;
	cin>>a>>b;
	while(a>0&&b>0)
	{
		if (a == b)
		{
			a++;
			b = b - 2;
		}
		else if(a>b)
		{
			b++;
			a=a-2;
		}
		else
		{
			a++;
			b=b-2;
		}
		if (a < 0 || b < 0)
			break;
		counts++;
	}
	cout<<counts<<endl;
	return 0;
}
