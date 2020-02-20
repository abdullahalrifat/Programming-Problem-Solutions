// CPP program to find Minimum number of times A
// has to be repeated such that B is a substring of it
#include <bits/stdc++.h>
#define input freopen("/mnt/sda3/Programming-Problem-Solutions/HashCode_2020/PractiseRound/e_also_big.in", "r", stdin);
#define output freopen("/mnt/sda3/Programming-Problem-Solutions/HashCode_2020/PractiseRound/e_also_big.out", "w", stdout);
#define sync  ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

using namespace std;
bool sortbysec(const pair<int,int> &a,
               const pair<int,int> &b)
{
    return (a.second > b.second);
}
int main()
{
    sync;
    input;
    output;

    int max, type;
    cin>>max>>type;
    vector<int> types;
    vector<pair<int,int>> list;
    int totalTypes = 0;
    for(int i=0;i<type;i++)
    {
        int temp;
        cin>>temp;
        types.push_back(temp);
        list.emplace_back(make_pair(i,temp));
    }
    sort(list.begin(), list.end(), sortbysec);
    int cnt = 0;
    vector<pair<int,int>> finalList;
    for(int i=0;i<list.size();i++)
    {
        if(list[i].second > max) continue;
        if(list[i].second + cnt > max) continue;
        cnt += list[i].second;
        finalList.emplace_back(list[i]);
    }
    sort(finalList.begin(), finalList.end());
    cout<<finalList.size()<<endl;
    for(int i=0;i<finalList.size();i++)
    {
        cout<<finalList[i].first<<" ";
    }
    cout<<endl;
    fclose(stdin);
    fclose(stdout);
    return 0;
}
