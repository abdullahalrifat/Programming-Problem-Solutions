#include <iostream>
#include<string>
#include<map>
#include<algorithm>
using namespace std;
int main() {
    map<string,string>slogan;
    int t;
    cin>>t;
    getchar();
    for(int i=0;i<t;i++)
    {

        string first;
        getline(cin,first);
        string second;
        getline(cin,second);
        slogan[first]=second;
    }
    int n;
    cin>>n;
    getchar();
    for(int i=0;i<n;i++)
    {

        string first;
        getline(cin,first);
        cout<<slogan[first]<<endl;
    }
    return 0;
}