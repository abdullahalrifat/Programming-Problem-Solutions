#include<cstdio>
#include<iostream>
using namespace std;
long long array[778][778];
long long cal(int i,int j)
{
    if(j==0||i==j)
    {
        array[i][j]=1;
    }
    if(j==1)
    {
        array[i][j]=i;
    }
    if(array[i][j]==0)
    {
        array[i][j]=cal(i-1,j-1)+cal(i-1,j);
    }
    return array[i][j];
}
int main()
{
    int a;
    cin>>a;
    for(int i=0;i<a;i++)
    {
        for(int j=0;j<778;j++)
        {
            array[i][j]=0;
        }
    }
    long long  num=cal(a,5)+cal(a,6)+cal(a,7);
    cout<<num<<endl;
    return 0;
}