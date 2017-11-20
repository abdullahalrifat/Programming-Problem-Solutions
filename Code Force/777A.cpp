#include <iostream>
using namespace std;
int arr[3];
int pos(long long int n,int ind)
{
    if(ind==2)
    {
        n=n%6;
    }
    else if(ind==1)
    {
        n=n%3;
    }
    else if(ind==0)
    {
        n=n%6;
    }
    if(n==0)
    {
        return ind;
    }
    else
    {
        for(long long int i=n;i>0;i--)
        {
            if(i%2!=0)
            {
                int temp=arr[0];
                arr[0]=arr[1];
                arr[1]=temp;
            }
            else
            {
                int temp=arr[1];
                arr[1]=arr[2];
                arr[2]=temp;
            }
        }

        for(int i=0;i<3;i++)
        {
            if(arr[i]==1)return i;
        }
    }

}
int main() {
    int n,in;
    cin>>n>>in;
    for(int i=0;i<3;i++)
    {
        if(i==in)arr[i]=1;
        else arr[i]=0;
    }
    cout<<pos(n,in)<<endl;
    return 0;
}
