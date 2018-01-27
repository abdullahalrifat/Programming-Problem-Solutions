#include<cstdio>
#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int n,m,arrays[1010];
    cin>>n;
    while(n)
    {
        cin>>m;
        for(int i=0;i<m;i++)
        {
            cin>>arrays[i];
        }
        sort(arrays,arrays+m);
        for(int i=0;i<m;i++)
        {
            cout<<arrays[i];
            if(i<m-1)
                cout<<" ";
        }
        cout<<"\n";
        n--;
    }
    return 0;
}
