#include<iostream>
using namespace std;

int main(){
    int i,j;
    for(i=1;i<=5;i++){
        for(j=1;j<=i;j++){
            char name='a'+(i-1);
            cout<<name;
        }
        cout<<endl; 
    }
}