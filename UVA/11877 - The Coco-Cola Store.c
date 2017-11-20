#include <stdio.h>
int main()
{
   int n,x;
   while(scanf("%d",&n))
   {
       if(n==0)
       {
           break;
       }
       else
       {
          x=n/2;
       }
       printf("%d\n",x);
   }
    return 0;
}
