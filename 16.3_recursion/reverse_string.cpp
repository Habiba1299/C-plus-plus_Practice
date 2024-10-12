#include<iostream>
using namespace std;

void reverse_string(string s){

    if(s.length() == 0)
        return;
   
    string rest = s.substr(1);

    reverse_string(rest);
    cout << s[0] ;

};


int main(){

    string st = "3.14pxxxpp3.14ixi3.14pp";

    reverse_string(st);
    cout<< endl;
    cout << st.substr() << endl;
    return 0;
}