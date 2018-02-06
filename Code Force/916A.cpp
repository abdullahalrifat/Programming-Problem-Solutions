#include <iostream>
#include<cstdio>
using namespace std;

int main() {
    int x;
    cin>>x;
    int hr,mn;
    int hr2,mn2;
    int cnt=0;
    cin>>hr>>mn;
    if(hr%10==7||mn%10==7)cout<<0<<endl;
    else
    {
        while(true) {
            cnt++;
            mn -= x;

            if (mn < 0) {
                mn += 60;
                hr--;
                if (hr < 0)hr += 24;
            }
            if (hr % 10 == 7 || mn % 10 == 7)
            {
                break;
            }

        }
        cout<<cnt<<endl;

    }


    return 0;
}