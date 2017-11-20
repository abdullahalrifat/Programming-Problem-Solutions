#include<cstdio>
#include<algorithm>
#include<iostream>
#include<vector>
#include<cmath>
using namespace std;
int main()
{
    bool ans=true;
    int n,in,diff;
    vector<int> arr;
	vector<int >dif;
    while(1)
    {
		arr.clear();
		dif.clear();
        cin>>n;
        if(cin.eof())
        {
            break;
        }
        for(int i=0;i<n;i++)
        {
            cin>>in;
           arr.push_back(in);
        }
        for(int i=1;i<n;i++)
        {
			diff=abs(arr[i]-arr[i-1]);
			dif.push_back(diff);

        }
		sort(dif.begin(),dif.end());
		for(int i=1;i<n-1;i++)
        {
			if(abs(dif[i]-dif[i-1])==1)
			{
				ans=true;
				continue;
			}
			else
			{
				ans=false;
				break;
			}

        }
        if(ans==false)
        {
            cout<<"Not jolly"<<endl;
			ans=true;
        }
        else
        {
            cout<<"Jolly"<<endl;
        }
    }
    return 0;
}
