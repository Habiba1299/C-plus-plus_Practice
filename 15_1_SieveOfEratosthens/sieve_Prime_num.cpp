#include<iostream>
using namespace std;

int prime_num(int num, int num2){
    int count = 0;
    int prime[num2+1] = {0};

    for(int i =2 ; i <= num2; i++){
        if(prime[i] == 0){
            for(int j = i*i; j <=100 ; j+=i){
               prime[j] = 1;
            }
       }
        
    }



    for(int i=num ; i <=num2 ; i++){
       if(i == 0 || i == 1)
           continue;
        if(prime[i] == 0){
            count++;
            cout<< i << endl;
        }
    }

    return count ;

}

int main(){

     int num,num2;
     
    
    cout << "Enter the range : ";
    cin >> num  >> num2;
      
    cout<<"The prime numbers between " << num << " and " <<  num2<<endl; 


    cout <<"The total number of prime num in this range is "<<prime_num(num,num2) << endl;
    

    return 0;
}