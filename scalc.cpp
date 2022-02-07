#include<iostream>
using namespace std;

int main(){

    float n1,n2;
    cout<<"Enter 2 numbers"<<endl;
    cin>>n1>>n2;

    char op;
    cout<<"Enter an operator";
    cin>>op;
    switch(op){
        case '+':
        cout<<(n1+n2)<<endl;

        case '-':
        cout<<(n1-n2)<<endl;

        case '*':
        cout<<(n1*n2)<<endl;

        case '/':
        cout<<(n1/n2)<<endl;
    }


    return 0;
}