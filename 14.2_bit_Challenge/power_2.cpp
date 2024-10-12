#include<iostream>
using namespace std;


int main(){

    int num = 4098,rem;

    if (num <= 0) {
        cout << "\nGiven num is not a power of 2" << endl;
        return 0;
    }

    while(num  > 1){
        rem = num%2;
        num = num/2;
        cout << num << endl;
        if(rem == 1){
            cout<< "\nGiven num is not a power of 2"<<endl ;
            return 0;
            break;
        }
    }


    cout<< "\nGiven num is a power of 2"; 

}