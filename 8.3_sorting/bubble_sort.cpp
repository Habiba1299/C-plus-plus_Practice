#include<iostream>
using namespace std;


void bubble_sort(int arr[],int n){

    int temp;
    
    for(int i = 0; i < n-1; i++){
        for(int j = 0; j < n-i-1; j++){
            int k = j+1;
            if(arr[k] < arr[j]){
                temp = arr[k];
                arr[k] = arr[j];
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
    cout << " Enter the elements of array : " << endl;;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    bubble_sort(arr,n);
    
}