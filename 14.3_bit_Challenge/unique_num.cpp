#include<iostream>
using namespace std;


 int find_unique_num(int arr[], int n) {
    int xorsum = 0;
    for (int i = 0; i < n; i++) {
        xorsum ^= arr[i];  // XOR all elements
        cout <<  xorsum << endl;
    }
    
    cout <<"+======"<<endl;
    return xorsum;
}




int main(){

    int arr[] = {2,4,6,7,4,6,2};

    int size = sizeof(arr)/sizeof(arr[0]);
    cout << find_unique_num(arr,size)<<endl;

}