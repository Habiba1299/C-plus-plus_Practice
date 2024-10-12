#include<iostream>
#include<cmath>
using namespace std;

int main(){ 
    int n;

    cout << "Enter How many Terms: ";
    cin >> n;

    long int term1 = 0, term2 = 1, nextTerm;

    for(int i = 0; i < n; i++){
        cout << i << "|"<< term1 << endl;
        nextTerm = term1 + term2;
        term1 = term2;
        term2 = nextTerm;
    }


    return 0;
}