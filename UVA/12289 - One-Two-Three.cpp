#include <stdio.h>
#include<string.h>
int main()
{
	int n, i = 0, j, x, y, d, e, f, g;
	char ch[100];
	char a[] = { "one" };
	char b[] = { "two" };
	char c[] = { "three" };
	d = strlen(a);
	e = strlen(b);
	f = strlen(c);
	scanf("%d", &n);
	while (i <= n)
	{
		x = 0, y = 0;
		gets(ch);
		g = strlen(ch);
		if (d == g)
		{
			for (j = 0; j < d; j++)
			{
				if (a[j] == ch[j])
				{
					x++;
				}
			}
		}
		if (e == g)
		{
			for (j = 0; j < e; j++)
			{
				if (b[j] == ch[j])
				{
					y++;
				}
			}
		}
		else if (f == g)
		{
			printf("3\n");
		}
		if (x == 2 || x == 3)
		{
			printf("1\n");
		}
		else if (y == 2 || y == 3)
		{
			printf("2\n");
		}
		i++;
	}
	return 0;
}