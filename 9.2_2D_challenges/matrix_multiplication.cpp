#include<iostream>
using namespace std;

int main(){
    int r1,r2,c1,c2;
    int A[300][300], B[300][300],mul[300][300];
    cout << " A matrix : how many rows & columns" <<endl;
    cin >> r1 >> c1;
    cout << "Enter the A matrix" << endl;

    for(int i=0; i<r1; i++){
        for(int j=0; j<c1; j++){
            cin >> A[i][j];
        }
    }

    cout << " B matrix : how many rows & columns" <<endl;
    cin >> r2 >> c2;
    if(c1 != r2){
        return 0;
    }
    cout << "Enter the B matrix" << endl;

    for(int i=0; i<r2; i++){
        for(int j=0; j<c2; j++){
            cin >> B[i][j];
        }
    }

    
     // matrix multiplication
    for(int i = 0; i< r1; i++){
        for(int j = 0; j< c2; j++){
            mul[i][j] = 0;
            for(int k = 0; k<r2 ; k++){
               mul[i][j] += A[i][k] * B[k][j];

            }
        }
    }

    cout<< "matrix multiplication : " << endl;

    for(int i=0; i<r1; i++){
        for(int j=0; j<c2; j++){
            cout << mul[i][j] << "  ";
        }cout << endl;
    }

  
    return 0;

  }



/*

A matrix : how many rows & columns
3 2
Enter the A matrix
1 5
6 7
8 9
 B matrix : how many rows & columns
2 4
Enter the B matrix
4 3 6 8
7 8 9 2

matrix multiplication :
39  43  51  18
73  74  99  62
95  96  129  82

*/
