#include<iostream>
using namespace std;

int main(){

    int n,sum=0;
    cout << " Enter array size : ";
    cin >> n;

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

     for (int i = 0; i < n; i++){
        int sub_sum=0;
        cout << "-----------------" << i <<"-----------------"<< endl;
        for(int j = i; j < n; j++){
            sub_sum += arr[j];
            cout << sub_sum << ", ";
            sum += sub_sum;
        }
        cout << endl ;
        cout << sum <<endl;
       
    }
   cout << "total sum of all subarray " << sum << endl;

   return 0;

    
}