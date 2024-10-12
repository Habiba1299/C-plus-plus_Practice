#include<iostream>
using namespace std;

int prime_num(int num){
    int prime[num+1] ={0};

    for(int i =2 ; i <= num; i++){
        prime[i] = i;
    }

    for(int i =2 ; i <= num; i++){
        if(prime[i] == i){
            for(int j = i*i; j <=num ; j+=i){
                if(prime[j] == j){
                   prime[j] = i; 
                }       
            }
       }
        
    }

    for(int i =2 ; i <= num; i++){
        
        cout << prime[i] << "=>" << i << endl;;
  
    }

    while(num!=1){

        cout << prime[num] << " ";
        num = num / prime[num];
    }


    // return count ;

}

int main(){

    int num;
     
    
    cout << "Enter the num : ";
    cin >> num;
      
   
    cout <<"The prime factor of " << num << " are "<< endl;
    prime_num(num) ;

}