#include <iostream>
#include <string>
#include<sstream>
#include <deque>
using namespace std;

int main() {
	
	int t;
	cin>>t;
	for(int i=1;i<=t;i++)
	{
        deque<int> first;
		int siz;
		cin>>siz;
		int n;
		cin>>n;
		cout<<"Case "<<i<<":"<<endl;
		for(int i=0;i<n;i++)
		{
			string order;
			string ans;
			stringstream ss;
			cin>>order;
			if(order=="pushLeft")
			{
				int num;
				cin>>num;
				if(first.size()<siz)
				{
					first.push_front(num);
					ss << num;
					ans="Pushed in left: "+ss.str();
					cout<<ans<<endl;
				}
				else
				{
					ans="The queue is full";
                    cout<<ans<<endl;
				}
			}
		   else if(order=="pushRight")
			{
				int num;
				cin>>num;
				if(first.size()<siz)
				{
					first.push_back(num);
					ss << num;
					ans="Pushed in right: "+ss.str();
					cout<<ans<<endl;
				}
				else
				{
                    ans="The queue is full";
					cout<<ans<<endl;
				}
			}
			else if(order=="popLeft")
			{
				if(first.empty())
				{
                    ans="The queue is empty";
					cout<<ans<<endl;
				}
				else
				{
                    ss << first.front();
					ans="Popped from left: "+ss.str();
					cout<<ans<<endl;
					first.pop_front();
				}
			}
			else if(order=="popRight")
			{
				if(first.empty())
				{
                    ans="The queue is empty";
					cout<<ans<<endl;
				}
				else
				{
                    ss << first.back();
                    ans="Popped from right: "+ss.str();
					cout<<ans<<endl;
					first.pop_back();
				}
			}
		}
	}
	return 0;
}
