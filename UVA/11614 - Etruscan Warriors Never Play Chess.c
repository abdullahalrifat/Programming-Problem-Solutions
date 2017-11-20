# include <stdio.h>
#include<stdlib.h>
# include <math.h>
int main()
{
    long int i,n,t,sum;
   scanf("%ld",&t);
   for(i=1;i<=t;i++)
   {
       scanf("%ld",&n);
       sum = (sqrt(1+8*n)-1)/2;
       printf("%ld\n",sum);
   }
    return 0;
}
