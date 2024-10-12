#include<iostream>
using namespace std;

void fibo(int n){
    long int term1 = 0, term2 = 1, nextTerm;

    for(int i = 0; i < n; i++){
        cout << i << "|"<< term1 << endl;
        nextTerm = term1 + term2;
        term1 = term2;
        term2 = nextTerm;
    }


    // for(int i = 0; i < n; i++){
    //     if( i == 0)
    //         cout << i << "|"<< term1 << endl;
    //     else if( i == 1)
    //         cout << i << "|"<< term2 << endl;
    //     else{
    //         nextTerm = term1 + term2;
    //         term1 = term2;
    //         term2 = nextTerm;
    //         cout << i << "|"<< nextTerm << endl;
    //     }
    // }
}


int main(){
    int n;

    cout << "Enter How many Terms: ";
    cin >> n;
    fibo(n);
    return 0;
}