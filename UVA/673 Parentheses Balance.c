#include<stdio.h>
#include<string.h>
int main(){
int i,n,top;
char a[150],b[150],ch;
scanf("%d%c",&n,&ch);
    while(n-->0)
    {
      top=0;
      gets(a);
      for(i=0;i<strlen(a);i++)
      {
        if(a[i]=='(')
        {
         b[top++]=a[i];
        }
        else if(a[i]=='[')
        {
            b[top++]=a[i];
        }
        else if(a[i]==')'&&top!=0&&b[top-1]=='(')
        {
            top--;
        }
        else if(a[i]==']'&&top!=0&&b[top-1]=='[')
        {
            top--;
        }
        else
        {
          break;
        }
     }

        if(top==0 && i==strlen(a))
        printf("Yes\n");
        else
        printf("No\n");
        }
        return 0;
}
