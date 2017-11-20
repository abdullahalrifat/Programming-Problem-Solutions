#include <iostream>
#include<algorithm>
#include<cstdio>
using namespace std;

int main()
{
	int n, m, drives[1002], sum, counts;
	while (scanf("%d", &n) != EOF)
	{
		sum = 0;
		counts = 0;
		scanf("%d", &m);
		for (int i = 0; i<n; i++)
		{
			scanf("%d", &drives[i]);
		}
		sort(drives, drives + n);
		for (int i = n - 1; i >= 0; i--)
		{
			sum = sum + drives[i];
			counts++;
			if (sum >= m)
			{
				break;
			}
		}
		printf("%d\n", counts);
	}
	return 0;
}

