#include <iostream>

using namespace std;

int main()
{
    int a,b,c,total=0;
    cin>>a>>b>>c;
    while(true)
    {
        if(a<1||b<2||c<4)
        {
            break;
        }
        if(a>=1&&b>=2&&c>=4)
        {
            a-=1;
            b-=2;
            c-=4;
            total+=1+2+4;

        }
        else
        {
            break;
        }

    }
    cout<<total<<endl;
    return 0;
}


