#include<iostream>
using namespace std;

int main(){
    int n,b;
    cin>>n;
    for(int i=1,b=n-1;i<=n;i++,b--){
        for(int j=1;j<=b;j++){
            cout<<" ";
        }
        for(int j=1;j<=2*i-1;j++){
            cout<<"*";
        }
        
        cout<<endl;
    }
    for(int i=n,b=0;i>=1;i--,b++){
        for(int j=1;j<=b;j++){
            cout<<" ";
        }
        for(int j=1;j<=2*i-1;j++){
            cout<<"*";
        }
        
        cout<<endl;
    }
    return 0;
}