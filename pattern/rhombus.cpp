/*Enter the size of n for butterfly: 5
Enter the size of n for rhombus: 5
        * * * * * 
      * * * * *
    * * * * *
  * * * * *
* * * * *

*/
#include<iostream>
using namespace std;

int main()
{
    int n;

    cout << "Enter the size of n for rhombus: ";
    cin >> n;

    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n-i; j++){
            cout <<  "  ";
        }

        for(int j = 1; j <= n; j++){
            cout <<  "* ";
        }

        cout << endl;
    }

   cout<< "ulta rohmbus" <<endl;

    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= i-1; j++){
            cout <<  "  ";
        }
        for(int j = 1; j <= n; j++){
            cout <<  "* ";
        }
        cout << endl;
    }

    return 0;
}