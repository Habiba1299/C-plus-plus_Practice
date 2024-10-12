#include<iostream>
using namespace std;

// time Complexity  - O(log n -base 2)
int binary_search(int arr[],int n,int val){

    int start = 0, end = n, mid;

    while(start <= end){
        mid = (start + end) /2;
        if(arr[mid] > val){
            end = mid - 1;
        }
        else if(arr[mid] < val){
            start = mid + 1;
        }
        else if(arr[mid] == val){
            return mid;
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


    cout <<"Found the key at index "<< binary_search(arr,n,key) <<endl;
}