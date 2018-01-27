#include <stdio.h>
#include<string.h>
int main()
{
    int n,i,len,finallen,a,b;
    char ch[110],chfinal[12];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%s",ch);
        len=strlen(ch);
        if(len>10)
        {
            finallen=len-2;
            b=finallen%10;
            a=finallen/10;
            chfinal[0]=ch[0];
            chfinal[1]=a+'0';
            if(chfinal[1]=='0')
            {
                chfinal[1]=b+'0';
                chfinal[2]=ch[len-1];
                chfinal[3]='\0';
            }
            else
            {
                chfinal[2]=b+'0';
                chfinal[3]=ch[len-1];
                chfinal[4]='\0';
            }
            printf("%s\n",chfinal);
        }
        else
        {
            printf("%s\n",ch);
        }
    }
    return 0;
}