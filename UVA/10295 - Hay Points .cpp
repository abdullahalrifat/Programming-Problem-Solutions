#include <iostream>
#include<string>
#include<map>
#include<algorithm>
using namespace std;
int main() {
    int t;
    cin>>t;
    map<string,int>dic;
    int n;
    cin>>n;
    for(int i=0;i<t;i++)
    {
        string temp;
        cin>>temp;
        int value;
        cin>>value;
        dic[temp]=value;
    }
    for(int i=0;i<n;i++)
    {
        long long int salary=0;
        while (true)
        {
            string word;
            cin >> word;
            if (word == ".")break;
            if (dic.find(word) != dic.end())
            {
                salary+=dic[word];
            }
        }
        cout<<salary<<endl;
    }

}