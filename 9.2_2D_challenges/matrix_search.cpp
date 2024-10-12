#include<iostream>
using namespace std;

// in the matrix all row and column is sorted in ascending order
int main(){
     
    int n , m; 
    cout << "How many rows and column  :";
    cin >> n >> m;

    int arr[n][m],num;
    cout << "Enter the matrix :"<< endl;
    for(int i =0; i < n; i++){
        for (int j=0; j <m; j++){
            cin >> arr[i][j];
        }
    }

     cout << "Enter the number :"<< endl;
    bool find = false;
    
    cin >> num;
    int row = 0,col = n-1;
    while(row < n || col >=0 ){
        if(arr[row][col] > num){
            col--;
        }else if(arr[row][col] < num){
            row++;
        }else{
            find = true;
            break;
        }
    }

    if(find == true){
        cout << "number exist";
    }else{
        cout << "number doesn't exist";
    }
    
    return 0;
}


/*

How many rows and column  :4 4
Enter the matrix :
1 2 7 11
2 5 8 12 
3 6 9 16
10 13 14 17

*/