#include<iostream>
#include<climits>
using namespace std;

int main(){

    int n;
    cout << " enter the array size: ";
    cin >> n;
    int arr[n];
    cout << " enter the elements of array: ";
    for( int i=0; i<n ; i++){
        cin >> arr[i];
    }
    int cur_sum = 0;
    int max_sum = INT_MIN;
    int j;

    for(int i = 0;  i < 2*n - 1; i++){
        cout << "------------- i  = " << i <<"---------------"<< endl;
        if(i < n){
            j = i ;
        }else{
            j = i - n;
        }
        cout << "------------- j  = " << j << "----------"  << endl;
        cur_sum +=arr[j];
        if(cur_sum < 0){
            cur_sum = 0;
        }
        max_sum = max(max_sum, cur_sum);
        cout << " Sum " << cur_sum << endl;
    }

    cout << "Maximum subArray Sum " << max_sum << endl;
    
    return 0;
}