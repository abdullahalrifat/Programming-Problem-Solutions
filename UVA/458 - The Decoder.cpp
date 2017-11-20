#include<stdio.h>
#include<string.h>
int main()
{
	int l, i;
	char x[1000];
	while (gets_s(x))
	{
		l = strlen(x);
		for (i = 0; i<l; i++)
		{
			printf("%c", x[i] - 7);
		}
		printf("\n");
	}
	return 0;
}
