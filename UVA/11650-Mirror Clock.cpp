#include<cstdio>
#include<cstring>
#include<string>
#include<iostream>
#include <sstream>
#include<iomanip>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int hour,munite;
        scanf("%d:%d",&hour,&munite);
        if(munite!=0)
        {
            hour=11-hour;
            if(hour<=0)
            {
                hour+=12;
            }
            munite=60-munite;
        }
        else
        {
            hour=12-hour;
            if(hour==0)
            {
                hour=12;
            }
        }

            cout<< setfill('0') << setw(2) << hour<<":"<<setfill('0') << setw(2)<<munite<<endl;
		}


    return 0;
}
