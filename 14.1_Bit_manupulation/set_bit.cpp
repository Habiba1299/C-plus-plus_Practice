// Set-bit - set 1 in the given position
#include<iostream>
using namespace std;

int set_bit(int num , int pos){

    return(num | (1 << pos));
}

int main(){
     
    int num = 21;
    int pos = 3;

    cout << "the num is :"<< set_bit(num,pos) << endl;
    

    cout << "the num  is :"<< (num | (1 << pos))  << endl;  
}