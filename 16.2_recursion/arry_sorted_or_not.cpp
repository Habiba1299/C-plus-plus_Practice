#include<iostream>
using namespace std;


int sorted_or_not(int arr[], int n){

    if(n == 1){
        return true;   
        // if n decrease to n then all the array is sorted so it return true
    }

    cout << arr[0] <<" < "<< arr[1]<< endl;

    bool restArray = sorted_or_not(arr+1,n-1);
    // here, we decease the array y pointing the next elment 
    // as the fit element of array and decrese the size of array
    // as we chop the first element of the array
    // and cotinue it until we found a disorder or n==1

    return(arr[0] < arr [1] && restArray) ; 

    // if the 1st element is less then 2nd element and rest array provide 
    // and rest array provide also true it retun value true 
}



int main(){

    int arr[]={10,2,30,5};

    int size = sizeof(arr)/sizeof(arr[0]);

 
    if(sorted_or_not(arr,size)){
        cout<< "array is sorted" << endl;
    }else{
         cout<< "array is not sorted" << endl;
    }

    return 0;
   

}