#include <iostream>
#include<vector>
#include <algorithm>

using namespace std;
int main() {

    long long int n;
    cin>>n;
    long long int totalCola=0;
    long long int max1=0;
    long long int max2=0;
    long long int x=n;
    long long int xx=n;
    long long int temp;
    vector<long long int> capacity;
        while(n--) {
           cin>>temp;
            totalCola += temp;
        }
    while(x--)
    {

            cin>>temp;
            capacity.push_back(temp);
            //if(temp>max1)max1=temp;
            //else if(temp>max2&&temp<=max1)max2=temp;
        }
    sort(capacity.begin(),capacity.end(),greater<long long int>());

    long long int totalCap = capacity[0] + capacity[1];

    if(totalCap>=totalCola && xx>=2)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;


    //if(xx==2)cout<<"YES"<<endl;
        //else if(max1+max2>=totalCola)cout<<"YES"<<endl;
        //else cout<<"NO"<<endl;


    return 0;
}
