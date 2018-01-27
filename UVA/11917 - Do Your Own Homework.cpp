#include <iostream>
#include<string>
#include<map>
#include<algorithm>
using namespace std;
int main() {
    int t;
    cin>>t;
    for(int i=1;i<=t;i++)
    {
        int n;
        cin>>n;
        map<string,int>sub;
        for(int j=0;j<n;j++)
        {
            string s;
            cin>>s;
            int days;
            cin>>days;
            sub[s]=days;
        }
        int lastday;
        cin>>lastday;
        string ass;
        cin>>ass;
        cout<<"Case "<<i<<": ";
        if ( sub.find(ass) == sub.end() )
        {
            cout<<"Do your own homework!"<<endl;
            continue;
        }
        if(sub[ass]<=lastday)
        {
            cout<<"Yesss"<<endl;
        }
        else if(sub[ass]<=lastday+5)
        {
            cout<<"Late"<<endl;
        }
        else
        {
            cout<<"Do your own homework!"<<endl;
        }

    }
    return 0;
}