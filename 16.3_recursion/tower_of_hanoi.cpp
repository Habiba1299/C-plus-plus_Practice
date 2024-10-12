#include<iostream>
using namespace std;


void tower_of_hanoi(int n, char src,char dest, char helper){

    
    if(n == 0){
        return;
    }
    
    tower_of_hanoi(n-1,src,helper,dest);
    cout<<src <<" --> "<<dest << endl;
    tower_of_hanoi(n-1,helper,dest,src);

}

int main(){


    tower_of_hanoi(4,'A','C','B');
    return 0;
    
}