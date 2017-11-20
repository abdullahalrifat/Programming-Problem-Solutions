#include <stdio.h>
int main()
{
    int i,sum,n;
    while(scanf("%d",&n))
    {
        if(n==0)
        {
            break;
        }
        else
        {
          for(i=1,sum=0;i<=n;i++)
            {
                sum=sum+(pow(i,2));
            }
            printf("%d\n",sum);
        }

    }
    return 0;
}
