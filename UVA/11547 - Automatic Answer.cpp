#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n,t,i,a,b,c,d,e,f,g,h;
	scanf_s("%d",&t);
	for(i=1;i<=t;i++)
	{
		scanf("%d",&n);
		a=n*567;
		b=a/9;
		c=b+7492;
		d=c*235;
		e=d/47;
		f=e-498;
		g=f/10;
		h=g%10;
		printf("%d\n",abs(h));
	}
	return 0;
}