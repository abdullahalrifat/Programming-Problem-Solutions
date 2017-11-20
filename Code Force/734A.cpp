#include <iostream>

using namespace std;

int main()
{
   int n;
   int d=0;
   int a=0;
   cin>>n;
   for(int i=0;i<n;i++)
   {
        char c;
        cin>>c;
        if(c==D)
        {
            d++;
        }
        else
        {
            a++;
        }
   }
   if(d>a)
   {
    cout<<"Danik"<<endl;
   }
   else if(a>d)
   {
    cout<<"Anton"<<endl;
   }
   else
   {
    cout<<"Friendship"<<endl;
   }
    return 0;
}


