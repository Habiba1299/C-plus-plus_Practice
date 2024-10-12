#include<iostream>
using namespace std;


int fibo(int n){

    int n1 = 0;
    int n2 = 1;

    if(n == 0){
       cout << n1 << endl;
       return 0;
    }
    if(n == 1){
       cout << n2 << endl;
       return 0;
    }

    for(int i = 2; i <= n; i ++){
        int temp = n2;
        n2 = n1 + n2;
        n1 = temp;
    }

    return n2;
}


int recursive_fibo(int n){

    if(n == 0 || n == 1)
       return n;
   
    return recursive_fibo(n-1)+recursive_fibo(n-2);
}



int main(){

    int n;

    cin >> n ;
 
    cout << fibo(n) << endl;
    cout << recursive_fibo(n) << endl;

}