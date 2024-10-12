#include<iostream>
#include<cmath>
using namespace std;

int main(){ 
    int n;

    cin >>n;
    
    if(n == 0 || n == 1){
        cout<<"non-prime"<<endl;
        return 0;
    }
    
 
    bool flag = true;


    for(int i=2;i<sqrt(n);i++){
        // cout << " enter" << sqrt(n) << endl;
        if(n%i==0){
           cout<<"non-prime"<<endl;
           flag = false;
           break;
        }
    }

    

    if(flag == true){
        cout<<"prime"<<endl;
    }

    return 0;
}