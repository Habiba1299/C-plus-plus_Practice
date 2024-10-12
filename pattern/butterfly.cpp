/*Enter the size of n for butterfly: 5
*        *
**      **
***    ***
****  ****
**********
**********
****  ****
***    ***
**      **
*        *

*/
#include<iostream>
using namespace std;

int main()
{
    int n;

    cout << "Enter the size of n for butterfly: ";
    cin >> n;

    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= i; j++){
            cout <<  "*";
        }

        int gap = 2*n - 2*i;
        for(int j = 1; j <= gap; j++){
            cout <<  " ";
        }

        for(int j = 1; j <= i; j++){
            cout <<  "*";
        }

        cout << endl;
    }


    for(int i = n; i >= 1; i--){
        for(int j = 1; j <= i; j++){
            cout <<  "*";
        }

        int gap = 2*n - 2*i;
        for(int j = 1; j <= gap; j++){
            cout <<  " ";
        }

        for(int j = 1; j <= i; j++){
            cout <<  "*";
        }

        cout << endl;
    }


    return 0;
}