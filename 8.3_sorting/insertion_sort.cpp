#include<iostream>
using namespace std;


void insertion_sort(int arr[],int n){

    int i , j ,key;
    for( i = 1; i < n; i++){
        j = i - 1;
        key = arr[i];
        while(j >= 0 && arr[j] > key){
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = key;



        // //dry run 
        for (int m = 0; m < n; m++)
        {
        cout << arr[m] << " ";
        } cout << endl ;
    }
    

    cout << "sorted array : ";

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

}

int main(){

    int n;
    cout << " Enter array size : ";
    cin >> n;

    int arr[n];
    cout << " Enter the elements of array : ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    insertion_sort(arr,n);
    
}