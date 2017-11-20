#include<stdio.h>
int main()
{
	int n, m,i,j,k,x[100],max,min;
	scanf("%d", &n);
	for (i = 1; i <= n; i++)
	{
		scanf("%d", &m);
		for (j = 0; j < m; j++)
		{
			scanf("%d", &x[j]);
		}
		for (j = 0,max=0; j < m; j++)
		{
			if (x[j]>max)
			{
				max = x[j];
			}		
		}
		for (j = 0, min = x[0]; j < m; j++)
		{
			
			if (x[j] <= min)
			{
				min = x[j];
			}
		}
		k = (max - min) * 2;
		printf("%d\n", k);
	}
	return 0;
}