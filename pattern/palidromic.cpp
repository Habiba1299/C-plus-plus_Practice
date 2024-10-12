/*
Enter the size of n for palindrom: 5
        1 
      2 1 2
    3 2 1 2 3
  4 3 2 1 2 3 4
5 4 3 2 1 2 3 4 5

*/
#include<iostream>
using namespace std;

int main()
{
    int n;

    cout << "Enter the size of n for palindrom: ";
    cin >> n;

    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n-i; j++){
            cout <<  "  ";
        }

        for(int j = i; j >= 1; j--){
            cout <<  j <<  " ";
        }

            for(int j = 1; j <= i-1; j++){
                cout <<  j+1 <<  " ";
            }

        cout << endl;
    }

    // Another way 

    for(int i = 1; i <= n; i++){
        int j;
        for(j = 1; j <= n-i; j++){
            cout <<  "  ";
        }

        int k = i;
        for(; j <= n; j++){
            cout <<  k-- <<  " ";
        }

        k=2;

        for(; j <= n+i-1; j++){
            cout <<  k++ <<  " ";
        }

        cout << endl;
    }

    return 0;
}