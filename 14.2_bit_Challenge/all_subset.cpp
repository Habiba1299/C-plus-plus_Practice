#include<iostream>
#include<string>
using namespace std;


void subset(int arr[], int n){
    cout<<"The loop will continue 2^n times or "<<(1<<n)<<" times"<<endl;

    for(int i = 0; i <(1<< n); i++){
        cout << "{";
        for(int j = 0; j <n; j++){
            if( i & (1 << j)){
                cout<< arr[j] << " ";
            }
        }cout << "}"<< endl;
    } 
}

int main(){

    int arr[] = {1,2,3};
    int size = sizeof(arr)/sizeof(int);

    subset(arr,size);
}
