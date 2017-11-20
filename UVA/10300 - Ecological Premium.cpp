#include<stdio.h>
int main()
{
	int n, m, i, j, k, sum, l,x[100][3];
	float y[100][3], z[100][3], a[100][3], b[100][3];
	scanf("%d", &n);
		for (l = 1; l <= n; l++)
		{
			scanf("%d", &m);
			for (j = 0; j < m; j++)
			{
				for (k = 0; k < 3; k++)
				{

					scanf("%d", &x[j][k]);
				}
			}

			for (j = 0; j < m; j++)
			{
				y[j][0] = (float)(x[j][0]) * (float)(x[j][2]);

			}
			for (j = 0, sum = 0; j < m; j++)
			{
				sum = sum + y[j][0];

			}
			printf("%d\n", sum);
		
		
	}
	return 0;
}