#include<iostream>
using namespace std;


int power(int num, int p){

    if(p == 0) return 1;

    return num * power(num,p-1);   
}

int main(){

    int num = 4,p;

    cin >> p ;

    cout << power(num , p) << endl;
    return 0;
}