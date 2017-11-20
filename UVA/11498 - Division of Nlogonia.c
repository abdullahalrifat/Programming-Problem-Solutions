#include <stdio.h>

int main()
{  int cases=0,n=0,m=0,x=0,y=0;
    while(1){
         scanf("%d",&cases);
         if(cases==0)
            break;
         int i=0;
         scanf("%d %d",&n,&m);
         for(i=0;i<cases;i++){
            scanf("%d %d",&x,&y);
            if(x==n ||y==m)
               printf("divisa\n") ;
            else if (x>n){
                if(y>m)
                    printf("NE\n") ;
                else
                    printf("SE\n") ;
            }else{
                if(y>m)
                    printf("NO\n") ;
                else
                    printf("SO\n") ;

            }
         }
        }
    return 0;
}
