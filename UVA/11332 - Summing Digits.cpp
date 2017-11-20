#include<stdio.h>
int main()
{
	int n, j, i, a, l, sum = 0, k;
	scanf("%d", &n);
	do
	{
		if (n > 9)
		{
			for (l = 1; n > 9; l++)
			{
				for (i = n, sum = 0; i / 10 > 0; i = i / 10)
				{
					j = i % 10;
					sum = sum + j;
				}
				sum = sum + i;
				n = sum;
			}
			printf("%d\n", n);
		}
		else
		{
			printf("%d\n", n);
		}

		scanf("%d", &n);
	} while (n != 0);

	return 0;
}