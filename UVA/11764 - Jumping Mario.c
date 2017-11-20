#include <stdio.h>
int main()
{
   int n,m,j,k,x[100],i,big,small;
   scanf("%d",&m);
   for(i=1;i<=m;i++)
   {
       scanf("%d",&n);
       for(j=0;j<n;j++)
       {
           scanf("%d",&x[j]);
       }
       big=0;
       small=0;
        for(j=1,k=0;j<n;j++)
       {
           if(x[k]>x[j])
           {
               small++;
           }
            else if(x[k]<x[j])
           {
               big++;
           }
           k++;
       }
       printf("Case %d: %d %d\n",i,big,small);
   }
    return 0;
}
