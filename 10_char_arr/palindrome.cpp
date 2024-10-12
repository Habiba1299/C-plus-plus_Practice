#include<iostream>
#include<cstring>
using namespace std;


int main(){

    char str[100];
    cout << "Enter the string :";
    cin.getline(str, 100);
    cout << strlen(str)<< endl;
    int len = strlen(str);
    bool palindrome = true;
    for(int i = 0; i < len/2; i++){
        if(str[i] != str[len-1-i]){
            palindrome = false;
            break;
        }
    }

    if(palindrome){
        cout << str << " is a palindrome." << endl;
    }else{
        cout << str << " is not a palindrome." << endl;
    }

    return 0;
    
}