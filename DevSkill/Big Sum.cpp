#include <cstdio>
#include<cstring>
#include<iostream>
#include<string>
using namespace std;
char x[1000], y[1000], sum[1000],ar[1000];
void summation()
{
    int i, j, k, l, a, sum1, r, s,t, sum2[1000], high;
	k = strlen(x);
	l = strlen(y);
	if (k>l)
	{
		high = k;
	}
	else
	{
		high = l;
	}
	sum1 = 0;
	for (i =k-1, j = l-1, a = 0; i>=0 || j>=0; i--, j--, a++)
	{
		if (x[i] >= 48 && x[i] <= 57)
		{
			r = x[i] - 48;
		}
		else
		{
            r=0;
		}
		if (y[j] >= 48 && y[j] <= 57)
		{
			s = y[j] - 48;
		}
		else
		{
            s=0;
		}
		sum2[a] = sum1 + r + s;
		t = sum2[a];
		if (sum2[a]>9&&i!=0)
		{
			sum2[a] = sum2[a] % 10;
			sum1 = t / 10;
		}
		else if (sum2[a]<=9)
		{
			sum1 = 0;
		}
	}
	for (i =a-1; i>=0; i--)
	{
        if(sum2[i]==0&&i==a-1)
        {

        }
        else
        {
            cout<<sum2[i];
        }

	}
}
int main()
{
    while(1)
    {
        int i,j,mid=1200;
        cin>>ar;
        if(cin.eof())
        {
           break;
        }
        for(i=0,j=0;i<strlen(ar);i++)
        {
            if(ar[i]==',')
            {
                mid=i;
                continue;
            }
            if(i<mid)
            {
                x[i]=ar[i];
            }
            else
            {
                y[j]=ar[i];
                j++;
            }
        }
        summation();
        ar[0]='\0';
        x[0]='\0';
        y[0]='\0';
        sum[0]='\0';
        cout<<endl;
    }

	return 0;
}
