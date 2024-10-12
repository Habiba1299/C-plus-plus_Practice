#include<iostream>
using namespace std;

int set_bit(int num , int pos){

    return(num | (1 << pos));
}

 int getBit(int n, int pos){
    return((n & (1<<pos)) != 0);
 }

 int find_unique_num(int arr[], int n) {
   int result = 0;

    for(int i=0 ; i <64; i++){
        cout<<"============"<< i << "==================="<<endl;
        int sum = 0;
        for(int j=0 ; j <n; j++){
            if(getBit(arr[j],i)){
               sum++;
               cout<<"sum = " << sum<<endl;
            }
        }
        if(sum%3!=0){
            result=set_bit(result, i);
            cout<<"result = " << result<<endl;
        }        
    }
    return result;

}

int main(){

    int arr[] = {2,4,4,3,3,2,3,2,8,4,8,8,9887};

    int size = sizeof(arr)/sizeof(arr[0]);
    cout << find_unique_num(arr,size)<<endl;
}