#include<cstdio>
#include<iostream>
#include<algorithm>
#include<map>
#include<vector>
using namespace std;
int main()
{
    int guest,guard;
    map<char,int>cnt;
    vector<char>arr;
    char gates[27];
    int assigned[27];
    for(int i=0;i<26;i++)
    {
        gates[i]=i+A;
        assigned[i]=0;
    }
    scanf("%d",&guest);
    scanf("%d",&guard);
    for(int i=0;i<guest;i++)
    {
        char temp;
        cin>>temp;
        arr.push_back(temp);
        cnt[temp]++;
    }
    bool ans=true;
    for(int i=0;i<guest;i++)
    {
        char temp=arr[i];

        if(cnt[temp]>0)
        {
            if(guard>0)
            {
                if(assigned[temp-65]==0)
                {
                    assigned[temp-65]=1;
                    guard--;
                }
            }
            else
            {
                if(assigned[temp-65]==0)
                {
                    ans=false;
                    break;
                }

            }

        }
        cnt[temp]--;
        if(cnt[temp]==0){
            guard++;
        }
        
    }
    if(ans==false)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
    return 0;
}
