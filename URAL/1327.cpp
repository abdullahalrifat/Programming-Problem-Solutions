#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<cmath>
#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
#include<stack>
#include<queue>
#include<iterator>
#include<set>
#include<map>
#include<sstream>
using namespace std;

int main()
{
    int a,b,start,ans=0;
    cin >>a>>b;
    if(a%2!=0)
    {
        start=a;
    }
    else{
        start=a+1;
    }
    for(int i=start;i<=b;i+=2)
    {
        ans++;
    }

    cout<<ans<<endl;
    return 0;
}