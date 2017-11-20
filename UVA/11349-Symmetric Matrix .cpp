#include <cstdio>
#include<iostream>
using namespace std;
int main()
{
    int t;

    int  n;

    cin>>t;
    for(int i=1;i<=t;i++)
    {
    bool isSymmetric=true;
    scanf("\nN = %d", &n);
    long long  inputMatrix[n][n];
    for(int i = 0; i < n; i++){
        for(int j = 0; j< n; j++){
           cin>>inputMatrix[i][j];
            if(inputMatrix[i][j]<0)
            {
                isSymmetric=false;
            }
        }
    }
    int k,l;
    for(int i=0,k = n-1; i <n; i++,k--){
        for(int j=0,l = n-1; j < n; j++,l--){
            if(inputMatrix[i][j]!=inputMatrix[k][l])
            {
                isSymmetric=false;
                break;
            }
        }
    }

        if(isSymmetric == true)
           cout<<"Test #"<<i<<": Symmetric."<<endl;
        else
           cout<<"Test #"<<i<<": Non-symmetric."<<endl;
  }
    return 0;
}
