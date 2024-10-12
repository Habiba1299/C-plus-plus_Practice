#include<iostream>
using namespace std;

void increment(int a){
    a++;
    cout << "from func1 a = " <<a<< endl;
}


void increment2(int *a){
    (*a)++;
    cout << "from func2 a = " <<*a<< endl;
}


int main(){

    int a = 10,c = 67;
    int *aptr = &a ;


    increment(a);
    cout << "from main a = " <<a<< endl;

    increment2(&a);
    cout << "from main again a = " <<a<< endl;
    
    return 0;

}
