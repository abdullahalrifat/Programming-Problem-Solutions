#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int n,m;
char str[123456];
char in[123];

int main(){
    int t;
    int i,j;
    int len;
    scanf("%d",&t);
    while(t--){
        scanf("%d %d",&m,&n);
        gets(str);
        gets(str);
        --n;
        while(n--){
            gets(in);
            for(len = strlen(str),i=len-m;i<len;++i)
            {
                for(j=i;j<len && str[j]==in[j-i];++j);
                if(j>=len)break;
            }
            strcpy(&str[i],in);
        }
        printf("%d\n",strlen(str));
    }
    return 0;
}
