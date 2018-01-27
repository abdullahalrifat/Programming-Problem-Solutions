#include <cmath>
#include<cstdio>
#include<vector>
#include<iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    int a[39] = {
            2, 3, 5, 7, 13, 17, 19, 31, 61, 89, 107, 127,
            521, 607, 1279, 2203, 2281, 3217, 4253, 4423,
            9689, 9941, 11213, 19937, 21701, 23209, 44497,
            86243, 110503, 132049, 216091, 756839, 859433,
            1257787, 1398269, 2976221, 3021377, 6972593
    };

    while(t--)
    {
        int n;
        cin>>n;
        cout<<a[n-1]<<endl;
    }
}
