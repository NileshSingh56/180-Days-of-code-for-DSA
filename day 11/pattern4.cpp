#include<iostream>
using namespace std;
int main(){
    int i,j,n;
    cout<<"Enter the number";
    cin>>n;
for(i=1;i<=n;i++){
    for(j=1;j<=n+1-i;j++)
    cout<<"*";
    for(j=1;j<=2*i-2;j++)
    cout<<" ";
    for(j=1;j<=n+1-i;j++)
    cout<<"*";
    cout<<endl;
}
for(i=n;i>=1;i--){
    for(j=1;j<=n+1-i;j++)
    cout<<"*";
    for(j=1;j<=2*i-2;j++)
    cout<<" ";
    for(j=1;j<=n+1-i;j++)
    cout<<"*";
    cout<<endl;
}
    
    

}