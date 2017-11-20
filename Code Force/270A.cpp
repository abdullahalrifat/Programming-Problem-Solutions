
// Created by abdullah on 2/9/17.
//

#include<cstdio>
#include<iostream>
using namespace std;
int main()
{

    int t;
    cin>>t;
    while(t--)
    {
        int temp;
        cin>>temp;
        bool ans=false;
        for(int i=3; ;i++)
        {
            if(((i-2)*180)==temp*i)
            {
                cout<<"YES"<<endl;
                ans=false;
                break;
            }
            if(((i-2)*180)>temp*i)
            {
                ans=true;
                break;
            }
        }
        if(ans==true)
        {
            cout<<"NO"<<endl;
        }
    }
    return 0;
}
