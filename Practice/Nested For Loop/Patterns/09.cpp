#include <iostream>
using namespace std;
/*
4 4 4 4
4 3 3 4
4 3 3 4
4 4 4 4
*/ 
int main()
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<max(max(i,j),max(n-1-i,n-1-j))+1<<" ";
        }
        cout<<endl;
    }
   return 0;
}