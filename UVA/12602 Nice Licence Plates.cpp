#include<cstdio>
#include<cmath>
#include<cstring>
#include<cstdlib>
int main()
{
	int test,n,i,m,num,ans,sum1,sum2;
	 char x[100];
	scanf("%d",&test);
	getchar();
   while(test!=0)
    {
		sum1=0,sum2=0;
		gets(x);
			for(i=0,m=2;i<3;i++,m--)
			{
				if(x[i]=='A')
				{
					n=0;
				}
				else if(x[i]=='B')
				{
				   n=1;
				}
				else if(x[i]=='C')
				{
					n=2;
				}
				else if(x[i]=='D')
				{
					n=3;
				}
				else if(x[i]=='E')
				{
					n=4;
				}
				else if(x[i]=='F')
				{
					n=5;
				}
				else if(x[i]=='G')
				{
					n=6;
				}
				else if(x[i]=='H')
				{
					n=7;
				}
				else if(x[i]=='I')
				{
					n=8;
				}
				else if(x[i]=='J')
				{
					n=9;
				}
				else if(x[i]=='K')
				{
					n=10;
				}
				else if(x[i]=='L')
				{
					n=11;
				}
				else if(x[i]=='M')
				{
					n=12;
				}
				else if(x[i]=='N')
				{
					n=13;
				}
				else if(x[i]=='O')
				{
					n=14;
				}
				else if(x[i]=='P')
				{
					n=15;
				}
				else if(x[i]=='Q')
				{
					n=16;
				}
				else if(x[i]=='R')
				{
					n=17;
				}
				else if(x[i]=='S')
				{
					n=18;
				}
			   else if(x[i]=='T')
				{
					n=19;
				}
				else if(x[i]=='U')
				{
					n=20;
				}
				else if(x[i]=='V')
				{
					n=21;
				}
				else if(x[i]=='W')
				{
					n=22;
				}
				else if(x[i]=='X')
				{
					n=23;
				}
				else if(x[i]=='Y')
				{
					n=24;
				}
				else if(x[i]=='Z')
				{
					n=25;
				}
				sum1=sum1+n*(powf(26,m));
			}
			for(int i=4;i<=7;i++)
			{
				num=x[i]-'0';
				if(i==4)
				{
					sum2=sum2+num*1000;
				}
				else if(i==5)
				{
					sum2=sum2+num*100;
				}
				else if(i==6)
				{
					sum2=sum2+num*10;
				}
				else if(i==7)
				{
					sum2=sum2+num*1;
				}
			}
	ans=abs(sum1-sum2);
	if(ans<=100)
	{
	printf("nice\n");

    }
	else
	{
		printf("not nice\n");
	}
     test--;
}
return 0;
}
