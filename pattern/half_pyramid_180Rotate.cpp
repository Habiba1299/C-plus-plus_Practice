/*
n = 5
    *
   **
  ***
 ****
*****
*/

#include<iostream>
using namespace std;

int main(){
    
    int n;
    
    cout<<"Enter the  size of half pyramid: "<<endl;
    cin >> n;


    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            if(j >= n-i+1)
                cout <<  "* ";
            else
                cout << "  ";
        }
        cout << endl;
    }
    
    // another way

       for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            if(j <= n-i)
                cout << "  ";
            else
                cout << "* " ;
        }
        cout << endl;
    }

    
    return 0; 

}