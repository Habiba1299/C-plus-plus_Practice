/*
Enter the  size of half pyramid(01) : 5
1 
0 1
1 0 1
0 1 0 1
1 0 1 0 1
*/

#include<iostream>
using namespace std;

int main(){
    
    int n;
    
    cout<<"Enter the  size of half pyramid(01) : ";
    cin >> n;


    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= i; j++){ 
            if((i+j)%2 == 0)
                cout << 1 <<" ";
            else
                cout << 0 <<" ";
        }
        cout << endl;
    }

    //Another way //1st one more efficient by logic

        for(int i = 1; i <= n; i++){
        for(int j = 1; j <= i; j++){ 
            if((i%2 == 0 && j%2 != 0) || (j%2 == 0 && i%2 != 0))
                cout << 0 <<" ";
            else
                cout << 1 <<" ";
        }
        cout << endl;
    }

           
    return 0; 

}