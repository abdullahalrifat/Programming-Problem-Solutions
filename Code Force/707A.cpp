#include <iostream>

using namespace std;

int main()
{
    bool ans=false;
    int n,m;
    char c;
    cin>>n;
    cin>>m;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>c;
            if(c==C||c==M||c==Y)
            {
                ans=true;
            }
        }
    }
    if(ans==true)
    {
        cout<<"#Color"<<endl;
    }
    else
    {
        cout<<"#Black&White"<<endl;
    }
    return 0;
}


