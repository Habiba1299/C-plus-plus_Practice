#include<iostream>
using namespace std;

int updatebit(int num , int pos, int value){

    int pos_one_com = ~(1 << pos);
    num = num & pos_one_com;
    num = (num | (value << pos));
    return num;
}

int main(){
     
    int num = 15;
    int pos = 2;
    int value = 0;

    cout << "the num is :"<< updatebit(num,pos,value) << endl;


    return 0;
}