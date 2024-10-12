#include<iostream>
using namespace std;

void replace_pi(string s){

    if(s.length() == 0)
        return;

    string rest ;
    if(s[0] == 'p' && s[1] == 'i'){
        rest = s.substr(2);
        cout<< 3.14;

    }else{
        rest = s.substr(1);
        cout<< s[0];
    }
    replace_pi(rest);

};


int main(){

    string st = "pppipxxxpppiixipipp";

    replace_pi(st);
    cout<< endl;
    cout << st.substr() << endl;
    return 0;
}