//
// Created by abdullah on 2/12/18.
//

#include<cstdio>
#include<iostream>
using namespace std;
int main()
{
    long long int  d1,d2,d3,big,min,sum=0,temp1=0,temp2=0;
    cin>>d1>>d2>>d3;
    if(d1>d2)
    {
        sum+=d2;
        if(sum+d3>sum+d1+d2)
        {
            sum+=d1+d2;
            sum+=d1;
        }
        else {
            sum+=d3;
            if(sum+d1>sum+d3+d2)
            {
                sum+=d2+d3;
            }
            else {
                sum+=d1;
            }
        }
        cout<<sum<<endl;
    }
    else
    {
        sum+=d1;
        if(sum+d3>sum+d1+d2)
        {
            sum+=d1+d2;
            sum+=d2;
        }
        else {
            sum+=d3;
            if(sum+d2>sum+d3+d1)
            {
                sum+=d1+d3;
            }
            else {
                sum+=d2;
            }
        }
        cout<<sum<<endl;
    }

    return 0;

}