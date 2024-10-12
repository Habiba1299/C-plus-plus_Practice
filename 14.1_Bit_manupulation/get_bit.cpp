#include<iostream>
using namespace std;

int get_bit(int num , int pos){

    // return((num & (1 << pos)) ? 1 : 0);
    return((num & (1 << pos)) != 0);
}

int main(){
     
    int num = 9;
    int pos = 3;

    cout << "the bit is :"<< get_bit(num,pos) << endl;
    cout << get_bit(num,pos) << endl;

    cout << "the bit is :"<< ((num & (1 << pos)) ) << endl;  
}