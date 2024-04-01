#include <iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the number whose pattern you want to print";
    cin>>n;
    int i,j;
    for(i=1;i<=n;i++){
        for(j=1;j<=n-i;j++){
            cout<<" ";
        }
        for(j=1;j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
}