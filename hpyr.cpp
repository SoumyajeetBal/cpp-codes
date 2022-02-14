#include<iostream>
using namespace std;

int main(){
    int n,b;
    cin>>n;

    for(int i=1,b=2*(n-1);i<=n;i++,b=b-2){
        for(int k=1;k<=b;k++){
            cout<<" ";
        }
        for(int j=1;j<=i;j++){
            cout<<"* ";
        }
        cout<<endl;
    }
    return 0;
}