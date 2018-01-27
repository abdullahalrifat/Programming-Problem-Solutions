#include<cstdio>
#include<iostream>
using namespace std;
int main()
{
    bool ans=true;
    int t,n,m,arr1[2005],arr2[2005],arr3[2005],sum;
    cin>>t;
    while(t--)
    {
        sum=0;
        cin>>n;
        cin>>m;
        for(int i=0;i<m;i++)
        {
            cin>>arr1[i];
            cin>>arr2[i];
            cin>>arr3[i];
        }
        for(int i=0;i<m;i++)
        {
           if(arr1[i]<arr2[i])
           {
               sum=sum+arr3[i];
           }
           else if(arr1[i]>arr2[i])
           {
            sum=sum+arr3[i];
           }
           if(arr2[i]==0)
           {
              ans = false;
           }
		   else
		   {
			   ans=true;
		   }
        }
        if(ans==false)
        {
            if(sum<0)
            {
                printf("possible\n");
            }
            else
            {
                printf("not possible\n");
            }
        }
        else
        {
            if(sum>0)
            {
                printf("possible\n");
            }
            else
            {
                printf("not possible\n");
            }
        }

    }
    return 0;
}
