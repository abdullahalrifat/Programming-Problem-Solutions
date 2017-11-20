#include<stdio.h>
int main()
{
	int s,u,v;
	while(scanf_s("%d %d",&u,&v)!=EOF)
	{
		s=2*(u*v);
		printf("%d\n",s);
		
	}
	return 0;
}