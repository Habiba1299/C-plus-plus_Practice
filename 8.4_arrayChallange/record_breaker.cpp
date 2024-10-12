#include<iostream>
#include<climits>
using namespace std;

int main(){

    int mx = -1;
    int n ;
    cin >> n ;
    int a[n+1];
    a[n] = -1;
    int record_days = 0;

    for(int i=0; i<n; i++){
        cin >> a[i];
    }


    for(int i=0; i<n; i++){
        
        cout << "max "<< mx <<endl;

        if( (a[i] > mx) && (a[i] > a[i+1]) ){
            record_days++;
        }
        mx = max(mx,a[i]);
    }

    cout << "record days count: " << record_days <<endl;
}