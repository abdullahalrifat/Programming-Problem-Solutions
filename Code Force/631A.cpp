#include<cstdio>
#include<vector>
#include<iostream>
using namespace std;
int main()
{
	vector<int>arrA;
	vector<int>arrB;
	vector<int>arrAsum;
	vector<int>arrBsum;
	int n,num,highsum=0,sum;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> num;
		arrA.push_back(num);
	}
	
	for (int i = 0; i < n; i++)
	{
		cin >> num;
		arrB.push_back(num);
	}
	for (int i = 0; i < n; i++)
	{
		if (i == 0)
		{
			arrAsum.push_back(arrA[0]);
		}
		else
		{
			arrAsum.push_back(arrA[i] | arrAsum[i - 1]);
		}

	}
	for (int i = 0; i < n; i++)
	{
		if (i == 0)
		{
			arrBsum.push_back(arrB[0]);
		}
		else
		{
			arrBsum.push_back(arrB[i] | arrBsum[i - 1]);
		}
	}
	for (int i = 0; i < n; i++)
	{
		sum = arrAsum[i] + arrBsum[i];
		if (sum > highsum)
		{
			highsum = sum;
		}
	}
	cout << highsum << endl;
	arrA.clear();
	arrB.clear();
	arrAsum.clear();
	arrBsum.clear();
	return 0;
}
