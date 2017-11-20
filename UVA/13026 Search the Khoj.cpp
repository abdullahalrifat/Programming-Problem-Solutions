#include<stdio.h>
#include<string.h>
struct numb
{
 char str[12];
};
int main()
{
	struct numb x[1005];
	int t,n,i,j,k,l,count;
	scanf("%d",&t);
	for(k=1;k<=t;k++)
	{
		scanf("%d",&n);
		for(i=0;i<=n;i++)
		{
			scanf("%s",x[i].str);
		}
		l=strlen(x[n].str); 
		printf("Case %d:\n",k);
		for(i=0;i<n;i++)
		{
			count=0;
			for(j=0;j<l;j++)
			{
				if(x[n].str[j]!=x[i].str[j])
				{
					count++;
				}
			}
			if(count<=1)
			{
				printf("%s\n",x[i].str);
			}
		}
		
	}

	return 0;
}
