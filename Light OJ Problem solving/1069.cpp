#include <iostream>
#include<cstdio>
#include<cstdlib>
using namespace std;
int main() {

    int t;
    cin>>t;
    for(int i=1;i<=t;i++)
    {
        int mp,lp;
        cin>>mp>>lp;
        int dif=abs(mp-lp);
        int total=dif*4;
        total+=(mp*4);
        cout<<"Case "<<i<<": "<<total+19<<endl;
    }

    return 0;
}