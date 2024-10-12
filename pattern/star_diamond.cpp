/*
Enter the size of n for star diamond: 5
    *
   ***
  *****
 *******
*********
 *******
  *****
   ***
    *

*/
#include<iostream>
using namespace std;

int main()
{
    int n;

    cout << "Enter the size of n for star diamond: ";
    cin >> n;

    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n-i; j++){
            cout <<  " ";
        }

        int gap = 2*i - 1;
        for(int j = 1; j <= gap; j++){
            cout <<  "*";
        }

        cout << endl;
    }


    for(int i = n-1; i >= 1; i--){
        for(int j = 1; j <= n-i; j++){
            cout <<  " ";
        }

        int gap = 2*i - 1;
        for(int j = 1; j <= gap; j++){
            cout <<  "*";
        }

        cout << endl;
    }

    return 0;
}