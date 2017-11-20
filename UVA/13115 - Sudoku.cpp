#include<cstdio>
#include<cmath>
#include<iostream>
using namespace std;
int main()
{
	int arr[30][30];
	bool ans=true;
	int t,n,k,grid,sum,totalsum;
	cin>>t;
	while(t--)
	{
	    bool ans=true;
		cin>>n;
		totalsum=(n*(n+1))/2;
		grid=sqrt(n);
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<n;j++)
			{
				cin>>arr[i][j];
			}
		}
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<n;j++)
			{
				int temp=arr[i][j];
				for(int k=0;k<n;k++)
				{
					if(arr[i][k]==temp&&j!=k)
					{
						ans=false;
					}
				}
			}
		}
		if(ans==false)
        {
            cout<<"no"<<endl;
        }

       else
        {
            for(int i=0;i<n;i++)
            {
                for(int j=0;j<n;j++)
                {
                    int temp=arr[i][j];
                    for(int k=0;k<n;k++)
                    {
                        if(arr[k][j]==temp&&i!=k)
                        {
                            ans=false;
                        }
                    }
                }
            }
            if(ans==false)
            {
                cout<<"no"<<endl;
            }
            else
            {
                for(int i=0;i<n;i+=grid)
                {
                    for(int j=0;j<n;j+=grid)
                    {
                        sum = 0;
                        for(int k = i; k < i+grid; k++)
                        {
                            for(int l = j; l < j+grid; l++)
                            {
                                 sum =sum+ arr[k][l];
                            }
                        }
                        if(sum==totalsum)
                        {

                        }
                        else
                        {
                            ans=false;
                        }
                    }
                }
				 if(ans==true)
				{
				 cout<<"yes"<<endl;
				}
				else
				{
				 cout<<"no"<<endl;
				 }
            }
           
        }

	}


	return 0;
}
