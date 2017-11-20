#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int count_numbers(long long int num)
{
	int count = 0;
	while (num != 0)
	{
		num = num / 10;
		count++;
	}
	return count;
}
int main() {
	/* Enter your code here. Read input from STDIN. Print output to STDOUT */
	bool what = false;
	int n,i=1,num;
	long long int ans, add=0, mult=1;
	cin >> n;
	while (1)
	{
		ans = n*i;
		if (ans > 9)
		{
			add = 0;
			mult = 1;
			num = ans;
			while (num != 0)
			{
				if ((num % 10) != 0)
				{
					add = add + (num % 10);
					mult = mult*(num % 10);
					num = num / 10;
				}
				else
				{
					what = false;
					break;
				}
				what = true;;
				
			}
			if (what == true)
			{
				if (add >= mult)
				{
					cout << count_numbers(ans) << endl;
					break;
				}
			}
			
		}
		else
		{
			cout<<count_numbers(ans)<<endl;
			break;
		}
		i++;
	}
	return 0;
}
