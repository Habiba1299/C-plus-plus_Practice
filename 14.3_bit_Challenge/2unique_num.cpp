#include<iostream>
using namespace std;

 int setBit(int n, int pos){
    return((n & (1<<pos)) != 0);
 } 
 int find_2unique_num(int arr[], int n) {
    int xorsum = 0;
    for (int i = 0; i < n; i++) {
        xorsum ^= arr[i];  // XOR all elements
        cout <<  xorsum << endl;
    }
    int temp = xorsum;
    int setbit = 0;
    int pos = 0;

    while(setbit != 1){
        setbit = xorsum & 1;
        pos++;
        xorsum = xorsum >> 1;
    }

    int newxor =0;

    for(int i = 0; i< n; i++){
        if(setBit(arr[i],pos-1)){
            newxor ^= arr[i];
        }
    }
    int another_xor =newxor^temp;
    cout << "Unique Numbers are: "<< newxor  << " " << another_xor <<endl;
    return 0;

}

int main(){

    int arr[] = {2,4,8,3,2,8,5,4};

    int size = sizeof(arr)/sizeof(arr[0]);
    find_2unique_num(arr,size);
}