#include<stdio.h>
#include<string.h>
int main()
{
    char a[1000],b[1000],c[1000],d[1000],e[1000],f[1000],
    g[1000],h[1000],i[1000],j[1000];
    int n,k[1000],max,p,t=1,x;
    scanf("%d",&n);

        for(x=1;x<=n;x++)
        {
            scanf("%s%d",a,&k[0]);
            scanf("%s%d",b,&k[1]);
            scanf("%s%d",c,&k[2]);
            scanf("%s%d",d,&k[3]);
            scanf("%s%d",e,&k[4]);
            scanf("%s%d",f,&k[5]);
            scanf("%s%d",g,&k[6]);
            scanf("%s%d",h,&k[7]);
            scanf("%s%d",i,&k[8]);
            scanf("%s%d",j,&k[9]);
            max=0;
            for(p=0;p<10;p++)
            {
                if(k[p]>max)
                max=k[p];

            }
            printf("Case #%d:\n",t++);
            for(p=0;p<10;p++)
            {
               if(k[p]==max)
               {
                   if(p==0)
                   puts(a);
                   if(p==1)
                   puts(b);
                   if(p==2)
                   puts(c);
                   if(p==3)
                   puts(d);
                   if(p==4)
                   puts(e);
                   if(p==5)
                   puts(f);
                   if(p==6)
                   puts(g);
                   if(p==7)
                   puts(h);
                   if(p==8)
                   puts(i);
                   if(p==9)
                   puts(j);
               }
            }
        }

    return 0;
}
