#include <iostream>

using namespace std;
int arr[1000000];
int maximum(int n)
{
 int m=0;
 for(int i=0;i<n;i++)
 {
    if(m<arr[i])
    {
        m=arr[i];
    }
 }
 return m;
}
int main()
{
   int n;
   cin>>n;
   for(int i=0;i<n;i++)
   {
    cin>>arr[i];
   }
   int m=maximum(n);
   int added=0;
   if(n==1)
   cout<<0<<endl;
   else
   {
        for(int i=0;i<n;i++)
        {
            if(arr[i]==m)
            {

            }
            else
            {
                added+=(m-arr[i]);

            }
        }
        cout<<added<<endl;
   }
    return 0;
}

