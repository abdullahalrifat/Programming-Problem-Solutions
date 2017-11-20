#include<stdio.h>
int main()
{
    int n,res = 0;
    while(scanf("%d",&n)!=EOF)
    {
        res = n+(n/2);
        printf("%d\n",res);
    }
    return 0;
}
