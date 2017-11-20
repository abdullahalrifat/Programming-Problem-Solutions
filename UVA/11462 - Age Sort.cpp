#include<cstdio>
#include<algorithm>
#include<iostream>
using namespace std;
int array[2000010];
int main()
{
    int n;
    while(true)
    {

        cin>>n;
        if(n==0)break;
        for(int i=0;i<n;i++)
        {
            scanf("%d",&array[i]);
        }
        sort(array,array+n);
        for(int i=0;i<n;i++)
        {
            printf("%d ",array[i]);
        }
    }

    return 0;

}
