#include<stdio.h>
#include<string.h>
int main()
{
	char x[100];
	int i = 0, j, k;
	while (gets(x))
	{
		k = strlen(x);
		for (i = 0; i < k; i++)
		{
			if (x[i] == 'A' || x[i] == 'B' || x[i] == 'C')
			{
				x[i] = '2';
			}
			else if (x[i] == 'D' || x[i] == 'E' || x[i] == 'F')
			{
				x[i] = '3';
			}
			else if (x[i] == 'G' || x[i] == 'H' || x[i] == 'I')
			{
				x[i] = '4';
			}
			else if (x[i] == 'J' || x[i] == 'K' || x[i] == 'L')
			{
				x[i] = '5';
			}
			else if (x[i] == 'M' || x[i] == 'N' || x[i] == 'O')
			{
				x[i] = '6';
			}
			else if (x[i] == 'P' || x[i] == 'Q' || x[i] == 'R' || x[i] == 'S')
			{
				x[i] = '7';
			}
			else if (x[i] == 'T' || x[i] == 'U' || x[i] == 'V')
			{
				x[i] = '8';
			}
			else if (x[i] == 'W' || x[i] == 'X' || x[i] == 'Y' || x[i] == 'Z')
			{
				x[i] = '9';
			}
			else
			{
				x[i] = x[i];
			}
		}
		puts(x);
	}
	return 0;
}
