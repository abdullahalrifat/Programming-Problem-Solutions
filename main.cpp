#include <iostream>
#include<cstdio>
#include<cmath>
using namespace std;

/*long long int factor(long long int num)
{
    long long int fact=1;
    for (int i = 1; i <=num ; ++i) {
        fact*=i;
        cout<<fact<<endl;
    }
}
int main() {

    long long int h,l;
    factor(100);
    /*while(true)
    {
        cin>>l>>h;
        if(l==0&&h==0)break;
        cout<<(h/5)-(l/5)+1<<endl;
    }
    return 0;
}*/
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