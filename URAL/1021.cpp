#include <iostream>
#include<map>
using namespace std;

int main()
{
    map<int,int>numbers;
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int temp;
        cin>>temp;
        numbers[temp]=1;
    }
    bool ans=false;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int temp;
        cin>>temp;
        if(numbers[10000-temp]==1)
        {
            ans=true;
        }
    }
    if(ans==true)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;

    return 0;
}