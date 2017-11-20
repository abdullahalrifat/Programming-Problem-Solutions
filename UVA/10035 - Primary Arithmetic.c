#include <stdio.h>
int main(){
   unsigned long A,B;
   int C,COUNT;
   while(scanf("%lu %lu",&A,&B) == 2 && (A || B))
    {
      COUNT = C = 0;
      while(A||B)
        {
         C = (C+A%10+B%10)/10;
         A = A/10;
         B =B/ 10;
         COUNT =COUNT+ C;
      }
      if(COUNT!=0)
        {
         if(COUNT == 1)
         {
              printf("1 carry operation.\n");
         }

         else
         {
              printf("%d carry operations.\n",COUNT);
         }
      }
      else
      {
          printf("No carry operation.\n");
      }
   }
   return 0;
}
