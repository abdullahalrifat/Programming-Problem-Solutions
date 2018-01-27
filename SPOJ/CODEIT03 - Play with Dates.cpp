#include<cstdio>
#include<iostream>
using namespace std;
int isleap(int n)
{
    if( (n%4==0) && (n%400==0) )
    {
        return 1;
    }
    else if( (n%4==0) && (n%100!=0) )
    {
        return 1;
    }
    return 0;
}
int day_finder(int year,int mon,int day)
{
    int d=11;
    int m=1;
    int y=2012;
    long long int sum=0;
    if( (isleap(year)==1) && (mon>2) )
    {
        sum=1;

    }
    for(int i=1;i<mon;i++)
    {
        if(i==1)
        {
            sum+=31;
        }
        if(i==2)
        {
            sum+=28;
        }
        else if(i==3)
        {
            sum+=31;
        }
        else if(i==4)
        {
            sum+=30;
        }
        else if(i==5)
        {
            sum+=31;
        }
        else if(i==6)
        {
            sum+=30;
        }
        else if(i==7)
        {
            sum+=31;
        }
        else if(i==8)
        {
            sum+=31;
        }
        else if(i==9)
        {
            sum+=30;
        }
        else if(i==10)
        {
            sum+=31;
        }
        else if(i==11)
        {
            sum+=30;
        }
        else if(i==12)
        {
            sum+=31;
        }

    }
    sum+=day;

    for(int i=year-1;i>=2012;i--)
    {
        if(isleap(i)==1)
        {
            sum+=366;
        }
        else if(isleap(i)==0)
        {
            sum+=365;
        }

    }
    sum-=11;
    sum=sum%7;
    return sum;

}
void print_day(int n)
{

    if(n==0)
    {
        cout<<"Wednesday"<<endl;
    }
    else if(n==1)
    {
        cout<<"Thursday"<<endl;
    }
    else if(n==2)
    {
        cout<<"Friday"<<endl;
    }
    else if(n==3)
    {
        cout<<"Saturday"<<endl;
    }
    else if(n==4)
    {
        cout<<"Sunday"<<endl;
    }
    else if(n==5)
    {
        cout<<"Monday"<<endl;
    }
    else if(n==6)
    {
        cout<<"Tuesday"<<endl;
    }
}
int main()
{
    int t;
    int year,month,day;
    cin>>t;
    while(t--)
    {
        cin>>day>>month>>year;
        int n=day_finder(year,month,day);
        print_day(n);
    }
}
