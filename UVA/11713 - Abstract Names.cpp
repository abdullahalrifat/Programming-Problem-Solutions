#include<cstdio>
#include<cstring>
#include<string>
#include<iostream>
using namespace std;
int main()
{

    int m,cnt1=0,cnt2=0;
	char c[100],d[100];
    string a,b;
	bool ans=false;
    cin>>m;
    for(int i=0;i<m;i++)
    {
        cin>>a;
        cin>>b;
		if(a.length()==b.length())
		{

       /* for(int j=0;j<a.length();j++)
        {
            if(a[j]=='a'||a[j]=='e'||a[j]=='i'||a[j]=='o'||a[j]=='u')
            {

            }
            else
            {
                c[cnt1]=a[j];
                cnt1++;
            }
        }
		c[cnt1]='\0';
		for(int j=0;j<b.length();j++)
        {
            if(b[j]=='a'||b[j]=='e'||b[j]=='i'||b[j]=='o'||b[j]=='u')
            {

            }
            else
            {
                d[cnt2]=b[j];
                cnt2++;
            }
        }
		d[cnt2]='\0';*/
		for(int i=0;i<a.length();i++)
		{
			if((a[i]=='a'||a[i]=='e'||a[i]=='i'||a[i]=='o'||a[i]=='u')&&(b[i]=='a'||b[i]=='e'||b[i]=='i'||b[i]=='o'||b[i]=='u'))
			{
				ans=true;
			}
			else
			{
				if (a[i]==b[i])
				{
					ans=true;
				}
				else
				{
					ans=false;
					break;
				}
			}
		}
		if(ans==true)
		{
			cout<<"Yes"<<endl;
		}
		else
		{
			cout<<"No"<<endl;
		}

		c[0]='\0';
		d[0]='\0';
		cnt1=0;
		cnt2=0;
		ans=false;
	}
		else
		{
			cout<<"No"<<endl;
		}
    }
	return 0;
}
