#include<iostream>
using namespace std;

int main(){


    int n1,n2;
    cout<<"Input 2 numbers: ";
    cin>>n1>>n2;

    char op;
    cout<<"input an operator: ";
    cin>>op;

    switch(op){
        case '+':
            cout<<"sum: "<<n1+n2<<endl;
            break;
        case '-':
            cout<<"subtraction: "<<n1-n2<<endl;
            break;
        case '*':
            cout<<"multipy: "<<n1*n2<<endl;
            break;
        case '/':
            cout<<"divide "<<n1/n2<<endl;
            break;
        default:
            cout<<"wrong operator. ";
            break;

    }
    
    return 0;

}