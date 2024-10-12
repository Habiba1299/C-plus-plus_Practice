#include<iostream>
#include<cmath>
using namespace std;

int main(){ 
    int cube,num,num1,lastDigit,sum = 0 ;

    cout << "Enter the number :";
    cin >>num;
    num1 = num;


    while(num > 0){
        lastDigit = num % 10;
        cout << "last Digit " << lastDigit << endl;
        cube = pow(lastDigit,3);
        // cube = (lastDigit*lastDigit*lastDigit) ;
        cout << "cube " <<cube << endl;
        sum +=cube ;
        cout << "sum " << sum << endl;

        num = num /10; 
    }

    if(sum == num1)
        cout << "Armstrong Number";
    else
        cout << "Not a Armstrong Number";



    return 0;
}