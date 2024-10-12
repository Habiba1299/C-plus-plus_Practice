#include<iostream>
using namespace std;

int count_ones(int num){
    
    int i = 0, count = 0;
    int mask = (1 << i);

    while(mask <= num){
        cout << i <<  endl;
        if((num & mask) != 0){
            count++;
        } 
        i++;
        mask = (1 << i);
    }

    return count;
}

int numOfOnes(int n){

    int count = 0, i =0;

    while(n){
        cout << i++ <<  endl;
        n = n & n-1;
        count++;
    }
    return count;
}

int main(){
     
    int num = 100023;

    cout << "the bit is :"<< count_ones(num) << endl;
    cout << "the bit is :"<< numOfOnes(num) << endl;
   
}