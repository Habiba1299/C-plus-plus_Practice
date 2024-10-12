#include<iostream>
using namespace std;

// time Complexity  - O(n)

int linear_search(int arr[],int n,int val){

    for(int i = 0; i < n; i++){
        if(arr[i] == val){
            return i;
        }
    }
    return -1;

}

int main(){
    int n,key;
    cout << " Enter array size : ";
    cin >> n;

    int arr[n];
    cout << " Enter the elements of array : ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << " Enter the value : ";
    cin >> key;


    cout <<"Found the key at index "<< linear_search(arr,n,key) <<endl;


}