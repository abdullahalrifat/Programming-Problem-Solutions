#include<stdio.h>
#include<string.h>
#include<math.h>
int main()
{
	char x[10000], y[100][100];
	int i, a, j, k, l, n, m;
	scanf("%d", &n);
	for (a = 0; a <= n; a++)
	{
		m = 0;
		gets(x);
		l = strlen(x);
		k = sqrtf(l);
		if (sqrtf(l) - k == 0)
		{

			for (i = 0; i<k; i++)
			{
				for (j = 0; j<k; j++)
				{
					y[i][j] = x[m++];

				}
			}
			for (i = 0; i<k; i++)
			{
				for (j = 0; j<k; j++)
				{
					printf("%c", y[j][i]);
				}
			}
			printf("\n");
		}
		else
		{
			printf("INVALID\n");

		}
	
	}
	return 0;

}
