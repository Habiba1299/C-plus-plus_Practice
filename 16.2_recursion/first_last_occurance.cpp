#include<iostream>
using namespace std;

int first_occur(int arr[], int n, int i, int key){

    if(i == n)
        return -1;


    if(arr[i] == key)
        return i;
    
    return first_occur(arr,n,i+1,key);
   
}

int last_occur(int arr[], int n, int i, int key){

    if(i == n)
        return -1;

    int restArray = last_occur(arr,n,i+1,key);

    if(restArray!= -1){
        return restArray;
    }

    if(arr[i] == key){
        return i;
    }
    
    return -1;
   
}


int main(){

    int arr[] = { 4, 2, 1, 4 ,6 ,2};
    int i,key =13,size = sizeof(arr)/sizeof(arr[0]);

    cout << first_occur(arr,size,i=0,key)<< endl;;
    cout << last_occur(arr,size,i=0,key) << endl;
    return 0;
}
