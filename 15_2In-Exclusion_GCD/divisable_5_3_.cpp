#include<iostream>
using namespace std;

int divisable(int num, int n1, int n2){
    int c1 = num /n1;
    int c2 = num /n2;

    int c3 = num/(n1*n2);

    return (c1+c2)-c3;

}

int main(){

     int num =40,div1 = 4, div2=7;
     
    cout <<"total "<<divisable(num ,div1 ,div2)<< " numbers are divisable " <<endl;
    
    return 0;
}