//
// Created by abdullah on 2/2/17.
//
#include<cstdio>
#include<iostream>
#include <cmath>

using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i=1;i<=t;i++)
    {
        int d,u,v;
        cin>>d>>v>>u;
        printf("Case %d: ", i);
        if(u>v&&v)
        {
            printf("%.3f\n", d * (1.0 / sqrt(u * u - v * v) - 1.0 / u));
        }
        else
            cout<<"can't determine"<<endl;
    }

    return 0;
}