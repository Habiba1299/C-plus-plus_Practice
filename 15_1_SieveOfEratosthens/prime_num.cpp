#include<iostream>
using namespace std;

int prime_num(int num, int num2){
    bool flag;
    int count = 0 ;
    for(int i = num; i <= num2 ; i++){
        if(i == 0 || i == 1)
           continue;
        flag = true;
        for(int j = 2 ; j <= i/2 ; j++){
            if(i%j == 0){
                flag = 0;
                break;
            } 
        }
        if(flag){
            cout<< i << endl;
            count++;
        }
    }

    return count;

}

int main(){

    int num,num2;
     
    
    cout << "Enter the range : ";
    cin >> num  >> num2;
      
    cout<<"The prime numbers between " << num << " and " <<  num2<<endl; 

    cout <<"The total number of prime num in this range is "<<prime_num(num,num2) << endl;
    

    return 0;
}