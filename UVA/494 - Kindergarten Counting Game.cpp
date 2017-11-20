#include<stdio.h>
#include<string.h>
int main()
{
	char str[1000];
	int k, i, word, num;
	while (gets_s(str))
	{
		k = strlen(str);
		word = 1; num = 0;
		for (i = 0; i<k; i++)
		{
			if ((str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a' && str[i] <= 'z'))
			{
				if (word == 1)
				{
					num++;
					word = 0;
				}
			}
			else word = 1;
		}
		printf("%d\n", num);
	}
	return 0;
}