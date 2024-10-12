#include<iostream>
using namespace std;

int main(){
    int n,m;
    cout << "how many rows & columns" <<endl;
    cin >> n >> m;

    cout << "Enter the matrix" << endl;

    int arr[n][m],  row_start = 0,row_end =n-1,col_start = 0,col_end=m-1;

    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin >> arr[i][j];
        }
    }
    cout << endl;


    while(row_start <= row_end  && col_start <= col_end ){

        while(col_start < m){
            cout<< arr[row_start][col_start] << " ";
            col_start++;
        } 


        row_start = 1;
        while(row_start < n){
            cout<< arr[row_start][col_end] << " ";
            row_start++;
        } 


        col_end = m-2;
        while(col_end >= 0){
            cout<< arr[row_end][col_end] << " ";
            col_end--;
        } 

     
        row_end = n-2;
        col_start = 0;
        while(row_end > 0){
            cout<< arr[row_end][col_start] << " ";
            row_end--;
        }      
    } cout << endl;


    cout  << row_start << row_end  << col_start  << col_end <<endl;
    return 0;
}