#include<cstdio>
#include<iostream>
using namespace std;
int main()
{
	int n,x,y,z,sum;
	double ans,finalans;
	cin>>n;
	while(n--)
	{
		cin>>x>>y>>z;
		sum=x+y;
		ans=z/(double)sum;
		finalans=(ans*x)+(ans*(x-y));
		cout<<finalans<<endl;
	}
	return 0;
}