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
    for(int i = 0;  i < n; i++){

        cur_sum +=arr[i];
        cur_sum= max(cur_sum,arr[i]);
        max_sum = max(max_sum, cur_sum);
        cout << " Sum " << cur_sum << endl;
    }

    cout << "Maximum subArray Sum " << max_sum << endl;
    
    return 0;
}
