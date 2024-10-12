#include<iostream>
using namespace std;

// time Complexity  - O(n2)

void selection_sort(int arr[], int n){

    int temp;
    
    for(int i = 0; i < n ; i ++){
        for(int j = i+1; j < n; j++){
            if(arr[j] < arr[i]){
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp; 
            }

        }



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

    selection_sort(arr,n);


}