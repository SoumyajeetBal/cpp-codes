#include<iostream>
using namespace std;

int main(){
    char button;
    cout<<"enter a button";
    cin>>button;
    switch (button)
    {
    case 'a':
        cout<<"Namaste"<<endl;
        break;

    case 'b':
        cout<<"Hello"<<endl;
        break;
    
    case 'c':
        cout<<"Salut"<<endl;
        break;

    case 'd':
        cout<<"hola"<<endl;
        break;

    case 'e':
        cout<<"Ciao"<<endl;
        break;
    
    default:
    cout<<"Still learning more"<<endl;
        break;
    }
    return 0;
}