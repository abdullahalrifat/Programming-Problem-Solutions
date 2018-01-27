#include <iostream>
#include<string>
#include<cstdio>
#include<cstring>
#include <cstdlib>

using namespace std;

int main()
{
    int loc,exploc,dist=0;
    string in[1002];
    string arr1[10]={"Alice","Ariel","Aurora","Phil","Peter","Olaf","Phoebus","Ralph","Robin"};
    string arr2[10]={"Bambi","Belle","Bolt","Mulan","Mowgli","Mickey","Silver","Simba","Stitch"};
    string arr3[10]={"Dumbo","Genie","Jiminy","Kuzko","Kida","Kenai","Tarzan","Tiana","Winnie"};
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>in[i];
    }
    loc=1;
    for(int i=0;i<n;i++)
    {

        if(in[i][0]=='A'||in[i][0]=='P'||in[i][0]=='O'||in[i][0]=='R')
        {
            exploc=1;
        }
        else if(in[i][0]=='B'||in[i][0]=='M'||in[i][0]=='S')
        {
            exploc=2;
        }
        else if(in[i][0]=='D'||in[i][0]=='G'||in[i][0]=='J'||in[i][0]=='K'||in[i][0]=='T'||in[i][0]=='W')
        {
            exploc=3;
        }
        dist+=abs(loc-exploc);
        loc=exploc;
    }
    cout<<dist<<endl;
    return 0;
}