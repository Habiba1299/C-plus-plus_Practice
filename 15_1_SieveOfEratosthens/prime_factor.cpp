#include<iostream>
using namespace std;

void prime_num(int num){
    
    while(num != 1){
       for( int i = 2; i<= num ; i++){
           if(num% i == 0){
            cout << i << endl;
             num = num / i;
             break;
           }
       }

    }

}

void prime_num2(int num) {
    // Handle the case for factor 2 separately
    while (num % 2 == 0) {
        cout << 2 << " ";
        num /= 2;
    }
    
    // Check for odd factors from 3 onwards
    for (int i = 3; i * i <= num; i += 2) {
        while (num % i == 0) {
            cout << i << " ";
            num /= i;
        }
    }
    
    // If num is still greater than 2, then it is a prime number
    if (num > 2) {
        cout << num << " ";
    }
    cout << endl;
}






int main(){

    int num;
     
    
    cout << "Enter the num : ";
    cin >> num;
      
   
    cout <<"The prime factor of " << num << " are "<< endl;
    prime_num(num) ;

    cout<<"==========="<< endl;

    cout << "The prime factors of " << num << " are: ";
    prime_num2(num);
    

    return 0;
}