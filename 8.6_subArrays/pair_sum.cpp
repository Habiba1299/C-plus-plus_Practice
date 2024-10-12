#include<iostream>
using namespace std;



bool pairsum1(int arr[],int n,int k){
    
    int sum; 
    for( int i = 0; i < n-1; i++){
        for( int j = i+1; j < n; j++){
            sum = arr[i] + arr[j];
            if(sum == k){
                cout << "The pair is index " << i << " & " << j <<endl;
                return true;
            }            
        }
    }
    return false;
}

//only worked in sorted array
//if the array is nor sorted first sort the array
bool  pairsum2(int arr[],int n,int k){
    //sort(arr, arr+n)
    int sum; 
    int low = 0, high = n-1;
    while(low < high){
        sum = arr[low] + arr[high];
        if (sum < k)
           low++;
        else if (sum > k)
            high--;
        else{
            cout << "The pair is index " << low << " & " << high <<endl;
                return true;
        }
    }
    return false;
}

int main(){ 

    int arr[] = {2,4,7,11,14,18,21,22};

    int n = sizeof(arr)/sizeof(arr[0]) ;

    int k = 25;
    
    cout << "size " << n << endl;

    cout <<"brute force-pairsum : "<< (pairsum1(arr,n,k) ? "found" : " not found") <<endl;
    cout <<"pairsum1 O(n) : "<< (pairsum2(arr,n,k) ? "found" : " not found") <<endl;

}