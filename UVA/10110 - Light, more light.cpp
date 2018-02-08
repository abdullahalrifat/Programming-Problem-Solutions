//
// Created by abdullah on 2/9/18.
//

#include <iostream>
#include<cstdio>
#include<cmath>
using namespace std;

int main() {

    long long int h;
    while(true)
    {
        cin>>h;
        if(h==0)break;
        long long int value=sqrt(h);
        if(value==sqrt(h))
        {
            cout<<"yes"<<endl;
        }
        else
        {
            cout<<"no"<<endl;
        }
    }
    return 0;
}