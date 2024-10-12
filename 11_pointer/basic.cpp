#include<iostream>
using namespace std;

int main(){

    int a = 10;
    int *aptr = &a ;

    cout << *aptr << endl; //value
    cout << aptr << endl; //address
    cout<< a << endl;// value
    cout << &a << endl; //address

    cout << "=========Pointer of pointer=========="<< endl;

    int **ptr = &aptr;

    cout<< *ptr << endl; //value
    cout << ptr << endl;//address
    cout<< aptr << endl;//value
    cout << &aptr << endl; //address
    cout<< **ptr << endl; 

    cout <<"========== chage value with address=========="<<endl;
    
    cout << a << endl;
    *aptr = 12;
    cout << a << endl;
    **ptr = 13;
    cout << a << endl;

    cout << "=========Pointer Arithmatic=========="<< endl;
    aptr++;
    cout << aptr << endl;
    
    char ch = 'a';
    char *cptr = &ch;

    cout << *cptr << endl; //value
    cout << cptr << endl; //address
    cptr++;
    cout << cptr << endl; //address

    cout << "=========Pointer Array=========="<< endl;

    int arr[] = {10,20,30};
    cout << *arr << endl;

    int *ptarr = arr;
    for(int i =0; i <3; i++){
        cout<<*ptarr<<endl;
        ptarr++;
    }

    cout <<"----------another way to print array----------"<<endl;
    for(int i =0; i <3; i++){
        cout<<*(arr+i)<<endl;
       // arr++;  illegal 
       // i here is indexing pointer... when we add i , it goes to next index
    }



    return 0; 
}