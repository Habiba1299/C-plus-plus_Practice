#include<iostream>
using namespace std;

int isFactorial(int n){

    int fact = 1;
    while(n > 0){
        fact *= n;
        n--;
    }

    return fact;
}


int main(){
    int n;

    cout << "Enter Number: ";
    cin >> n;
    cout <<"Factorial of " << n <<" is "<< isFactorial(n) << endl;
    return 0;
}