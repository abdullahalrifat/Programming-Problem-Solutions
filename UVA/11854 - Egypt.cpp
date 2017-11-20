#include<cstdio>
#include<cmath>
#include<iostream>
using namespace std;
int main()
{
    long long int  a,b,c,d,e,f;
    while(scanf("%lld %lld %lld",&a,&b,&c))
    {
        if(a==0&&b==0&&c==0)
        {
            break;
        }
		if(a<b&&a<c)
		{
			d=pow(a,2);
			if(b<c)
			{
				 e=pow(b,2);
				  f=pow(c,2);
			}
			else
			{
				 e=pow(c,2);
				  f=pow(b,2);
			}
		}
		else if(b<a&&b<c)
		{
			d=pow(b,2);
			if(a<c)
			{
				 e=pow(a,2);
				  f=pow(c,2);
			}
			else
			{
				 e=pow(c,2);
				  f=pow(a,2);
			}
		}
		else if(c<b&&c<a)
		{
			d=pow(c,2);
			if(b<a)
			{
				 e=pow(b,2);
				  f=pow(a,2);
			}
			else
			{
				 e=pow(a,2);
				  f=pow(b,2);
			}
		}
		else
		{
			printf("wrong\n");
			continue;
		}
        if((d+e)==f)
		{
			printf("right\n");
		}
		else
		{
			printf("wrong\n");
        }

    }
return 0;
}
