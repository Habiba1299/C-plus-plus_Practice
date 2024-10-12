#include<iostream>
using namespace std;


int reverse_print_array(int arr[], int n){

    if(n == 0){
        return false;   
     
    }
    
    bool restArray =reverse_print_array(arr+1,n-1);
    cout << arr[0] << endl;
    return(restArray) ; 

}

int print_array(int arr[], int n){

    if(n == 0){
        return false;   
    }

    cout << arr[0] << endl;

    bool restArray =print_array(arr+1,n-1);
    
    return(restArray) ; 

   
}



int main(){

    int arr[]={10,2,3,5};

    int size = sizeof(arr)/sizeof(arr[0]);

    // cout << size << endl;

    print_array(arr,size);
    cout << "----------------"<< endl;
    reverse_print_array(arr,size);


    return 0;
   

}