#include <iostream>
#include<cstdio>
#include<vector>
#include<algorithm>
using namespace std;
int main() {

    int n,k,x;
    cin>>n>>k>>x;
    vector<int>arr;
    for (int i=0;i<n;i++)
    {
        int temp;
        cin>>temp;
        arr.push_back(temp);
    }
    sort(arr.begin(), arr.end(), greater<int>());
    int sum=0;
    for(int i=0;i<n;i++)
    {
        if(i<k)
        {
            sum+=x;

        }
        else
        {
            sum+=arr[i];

        }
    }
    cout<<sum<<endl;
    return 0;
}
