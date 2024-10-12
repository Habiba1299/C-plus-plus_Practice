#include<iostream>
using namespace std;

int gcd(int n1, int n2){

    int bg,sm,new_bg;
    
    if(n1 > n2){
       bg = n1;
       sm = n2;
    }else{
       bg = n2;
       sm = n1;
    }
     
    while(bg % sm != 0){
        cout << "enter" <<endl;
        new_bg = sm;
        sm = bg % sm;
        bg = new_bg;
    }

    return sm;


    //==================

    // while( sm != 0){
    // cout << "enter" <<endl;
    // new_bg = sm;
    // sm = bg % sm;
    // bg = new_bg;
    // }

    // return bg;



}

int main(){

     int num1 =32, num2 = 15 ,num3 =112;
     
    cout <<"gcd = "<<gcd( gcd(num1, num2 ),num3 )<< endl;
    
    return 0;
}