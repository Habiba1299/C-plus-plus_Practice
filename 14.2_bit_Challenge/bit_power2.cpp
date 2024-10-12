#include<iostream>
using namespace std;

int check_power_2(int num){
    return( num && (num & num-1) == 0);
}


int main(){

    int num = 16;

    cout << (check_power_2(num) ? "YES" : "NO" ) << endl;
    return 0;


}