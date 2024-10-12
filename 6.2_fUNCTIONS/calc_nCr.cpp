#include<iostream>
using namespace std;

int fact(int n){

    int fact = 1;
    while(n > 1){
        fact *= n;
        n--;
    }

    return fact;
}


int main(){
    int n,r;

    cout << "Enter n: ";
    cin >> n;
    cout << "Enter r: ";
    cin >> r;
    int nCr = fact(n)/fact(n-r)*fact(r);
    cout <<"nCr = "<< nCr << endl;
    return 0;
}