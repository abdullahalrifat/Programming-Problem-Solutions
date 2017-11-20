#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n,x[100],i,j,k,count;
    scanf("%d",&n);
    printf("Lumberjacks:\n");
    for(j=1;j<=n;j++)
    {
      for(i=0;i<10;i++)
      {
        scanf("%d",&x[i]);
      }
       if(x[0]>x[1])
        {
            count=0;
            for(k=0;k<9;k++)
            {
                if(x[k]>x[k+1])
                {
                     count++;
                }
            }
        }
        else if(x[0]<x[1])
        {
            count=0;
            for(k=0;k<9;k++)
            {
                if(x[k]<x[k+1])
                {
                     count++;
                }
            }
        }
        if(count==9)
        {
            printf("Ordered\n");
        }
        else
            {
                printf("Unordered\n");
            }
    }
    return 0;
}
