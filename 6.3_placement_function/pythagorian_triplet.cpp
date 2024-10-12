#include<bits/stdc++.h>
using namespace std;



int check_pythogorian(int x, int y, int z){
    int a,b,c;

    a = max(x, max(y,z));

    if( a == x){
        b = y; c = z;
    }else if( a == y){
        b = x; c = z;
    }if( a == z){
        b = y; c = x;
    }

    if(a*a == b*b + c*c)
        return 1;
    else
        return 0;
}

int main(){

    int x,y,z;

    cout << "Enter 3 numbers : " ;
    cin >> x>> y>>z;


    if(check_pythogorian(x,y,z)){
        cout << " It's a combination of pythogorian triplet";
    }
    else{
        cout << " It's  not a combination of pythogorian triplet";
    }


    
    return 0;
}