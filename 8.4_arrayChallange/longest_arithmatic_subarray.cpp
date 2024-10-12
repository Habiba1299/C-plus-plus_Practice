#include<iostream>
using namespace std;

int main(){

    int n,dif;
    cout << " Enter array size : ";
    cin >> n;

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int prev_dif = arr[0]-arr[1];
    int cur_len = 2;
    int max_len = 2;
    int j = 1;
       
    while(j < n-1 ){
       dif=arr[j] - arr[j+1];

    //    cout << " dif " << dif << endl;
       if(dif != prev_dif){
         cur_len = 2;
         prev_dif = dif;
       }else{
        cur_len++;
       }
    //    cout << " cur_len " << cur_len << endl;
       max_len=max(cur_len,max_len); 
       j++;   
    }
   cout << "longest_arithmatic_subarray: " <<max_len<< endl;

   return 0;

    
}