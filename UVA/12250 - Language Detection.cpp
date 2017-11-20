#include<stdio.h>
#include<string.h>
int main()
{
	int g, h, i, j, k, l, x = 1;
	char ch[100];
	char a[] = { "HELLO" };
	char b[] = { "HOLA" };
	char c[] = { "HALLO" };
	char d[] = { "BONJOUR" };
	char e[] = { "CIAO" };
	char f[] = { "ZDRAVSTVUJTE" };
	while (gets(ch))
	{

		if (ch[0] == '#')
		{
			return 0;
		}
		if (strcmp(ch, a) == 0)
		{
			printf("Case %d: ENGLISH\n", x);
			x++;
		}
		else if (strcmp(ch, b) == 0)
		{
			printf("Case %d: SPANISH\n", x);
			x++;
		}
		else if (strcmp(ch, c) == 0)
		{
			printf("Case %d: GERMAN\n", x);
			x++;
		}
		else if (strcmp(ch, d) == 0)
		{
			printf("Case %d: FRENCH\n", x);
			x++;
		}
		else if (strcmp(ch, e) == 0)
		{
			printf("Case %d: ITALIAN\n", x);
			x++;
		}
		else if (strcmp(ch, f) == 0)
		{
			printf("Case %d: RUSSIAN\n", x);
			x++;
		}
		else
		{
			printf("Case %d: UNKNOWN\n",x);
			x++;
		}
	}
}