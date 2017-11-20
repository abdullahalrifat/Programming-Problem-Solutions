#include<stdio.h>
#include<string.h>
int main()
{
	int n, i, j,amount,sum=0;
	char x[100];
	scanf_s("%d", &n);
	for (i = 1; i <= n; i++)
	{
		scanf_s("%s", x);
		if (strcmp(x,"donate")==0)
		{
			scanf_s("%d",&amount);
			sum = sum + amount;
		}
		else
		{
			printf("%d\n", sum);
		}
	}
	return 0;
}