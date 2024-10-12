#include<iostream>
#include<string>

using namespace std;

int main(){

    string str;
    cout << "Enter a string: ";
    cin >> str;
    cin.ignore();
    cout << str<<endl;

    string str1(5,'c');
    cout << str1<<endl ;
    
    // input a word
    string str3 = "MyCode";
    cout << str3<<endl;

    // input a sentence

    string str4;
    cout << "Enter a string: ";
    getline(cin, str4);
    cout << str4<<endl;
    return 0;
}