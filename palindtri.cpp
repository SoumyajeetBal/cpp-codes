#include<iostream>
using namespace std;

int main(){
    int n,b;
    cin>>n;
    for(int i=1,b=2*(n-1);i<=n;i++,b-=2){
        for(int j=1;j<=b;j++){
            cout<<" ";
        }
        for(int j=1,k=i;j<=i-1;j++,k--){
            cout<<k<<" ";
        }
        cout<<"1 ";
        for(int j=1,k=i;j<=i-1;j++,k--){
            cout<<k<<" ";
        }
        cout<<endl;
    }
    return 0;
}