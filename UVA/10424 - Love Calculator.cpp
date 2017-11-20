#include<cstdio>
#include<iostream>
#include<cstring>
#include<string>
using namespace std;
int main()
{
	int sum1, sum2, len1, len2, modvalue1, modvalue2, num,n;
	float finalanswer;
	string name1, name2;
	char c;
	while (!getline (cin,name1).eof())
	{
		getline (cin,name2);
		if(name1[0]=='^Z')
        {
            break;
        }
		len1 = name1.length();
		len2 = name2.length();
		sum1 = 0;
		sum2 = 0;
		modvalue1 = 0;
		modvalue2 = 0;
		num=0;
		finalanswer =0;
		for (int i = 0; i<len1; i++)
		{
			if (name1[i] >= 'A'&&name1[i] <= 'Z')
			{
				sum1 = sum1 + (name1[i] - 64);
			}
			else if (name1[i] >= 'a'&&name1[1] <= 'z')
			{
				sum1 = sum1 + (name1[i] - 96);
			}

		}
		for (int i = 0; i<len2; i++)
		{
			if (name2[i] >= 'A'&&name2[i] <= 'Z')
			{
				sum2 = sum2 + (name2[i] - 64);
			}
			else if (name2[i] >= 'a'&&name2[1] <= 'z')
			{
				sum2 = sum2 + (name2[i] - 96);
			}

		}
		while (sum1 != 0)
		{
			modvalue1 += (sum1 % 10);
			sum1 = sum1 / 10;
		}
		while (modvalue1>9)
		{
			num = modvalue1;
			modvalue1 = 0;
			while (num != 0)
			{
				modvalue1 += (num % 10);
				num = num / 10;
			}
		}
		while (sum2 != 0)
		{
			modvalue2 += (sum2 % 10);
			sum2 = sum2 / 10;
		}
		while (modvalue2>9)
		{
			num = modvalue2;
			modvalue2 = 0;
			while (num != 0)
			{
				modvalue2 += (num % 10);
				num = num / 10;
			}
		}
		n=modvalue1 / modvalue2;
		if (n<1)
		{
			finalanswer =((float)modvalue1 / (float)modvalue2);
		}
		else
		{

			finalanswer = ((float)modvalue2 / (float)modvalue1);
		}
		finalanswer = finalanswer * 100;
		printf("%.2f %%\n", finalanswer);
	}
	return 0;
}
