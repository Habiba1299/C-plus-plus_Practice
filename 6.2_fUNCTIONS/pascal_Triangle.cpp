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
    for(int i=0 ; i <n ; i++){
        for(int j=0 ; j <= i ; j++){
           cout <<  fact(i)/(fact(i-j)*fact(j)) << " ";
        }
        cout << endl;
    }

    return 0;
}