#include<iostream>
using namespace std;

int main(){
    int n,b;
    cin>>n;
    for(int i=1,b=n-1;i<=n;i++,b--){
        for(int j=1;j<=b;j++){
            cout<<" ";
        }
        for(int j=1;j<=n;j++){
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}