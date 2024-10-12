// #include<bits/stdc++.h>
#include<iostream>
#include<cmath>
using namespace std;

int bin_to_dec(int n){

    int bin = n, num, dec_num = 0 , mid_num;

    for (int i = 0; bin != 0; i++ ){
        num = bin % 10;

        cout << "num :" << num <<endl;

        mid_num = num * pow(2 , i);
        dec_num += mid_num;
        cout << "dec_num :" << dec_num <<endl;

        bin = bin / 10;

        cout << "bin :" << bin <<endl;

        // cout << "--------------------------"<< endl;
    }

    return dec_num;
}


int main(){
    long int n;
    cout<< "Enter a binary number: ";
    cin>> n ;

    cout << "decimal number: " <<bin_to_dec(n)<<endl;

    return 0;
} 