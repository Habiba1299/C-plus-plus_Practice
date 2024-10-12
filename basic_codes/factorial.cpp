#include<iostream>
#include<cmath>
using namespace std;

int main(){ 
    int num ,fact =1 ;

    cout << "Enter the number :";
    cin >>num;
    int og_num = num;
    while(num > 1){
        fact = fact * num--;
    }

    cout << "factorial of "<< og_num << " : " << fact;


    return 0;
}