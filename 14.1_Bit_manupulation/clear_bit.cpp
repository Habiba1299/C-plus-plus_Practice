#include<iostream>
using namespace std;

int clear_bit(int num , int pos){

    int pos_one_com = ~(1 << pos);
    return(num & pos_one_com);
}

int main(){
     
    int num = 9;
    int pos = 3;

    cout << "the num is :"<< clear_bit(num,pos) << endl;
    cout <<  clear_bit(num,pos) << endl;
    
    int pos_one_com = ~(1 << pos);
    cout << "the num is :"<< (num & pos_one_com )<< endl;  
}