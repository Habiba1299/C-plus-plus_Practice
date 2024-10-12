#include<iostream>
#include<cmath>
using namespace std;

int main(){ 
    int num,lastDigit,rev_num = 0 ;

    cout << "Enter the number :";
    cin >>num;

    while(num > 0){
        lastDigit = num % 10;

        rev_num = lastDigit + rev_num*10;

        num = num /10; 
    }

    cout << "Reverse of the number: " << rev_num;


    return 0;
}