#include<iostream>
using namespace std;

int main(){
    int n,m;
    cout << "how many rows & columns" <<endl;
    cin >> n >> m;

    cout << "Enter the matrix" << endl;

    int arr[10][10], trans[m][n];

    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin >> arr[i][j];
        }
    }

    cout << "the transpose matrix" << endl;

    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            // cout << "trans" << j<< i <<" "<< arr[i][j]<<" = " << "arr" << i <<j<<endl;
            trans[j][i] = arr[i][j];
        }
    }

    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            cout << trans[i][j] << " ";
        }cout << endl;
    }
     
    // only for aquare matrix it will give correct answer
    cout << "the transpose matrix the actual array" << endl;
    
    int temp;
    for(int i=0; i<n; i++){
        for(int j=0; j<i; j++){
            temp = arr[i][j] ;
            arr[i][j] =  arr[j][i];
            arr[j][i] = temp;
        }
    }

     for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            cout << arr[i][j] << " ";
        }cout << endl;
    }
    return 0;

  }
