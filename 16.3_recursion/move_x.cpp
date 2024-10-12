#include<iostream>
using namespace std;

string move_x(string s){

    if(s.length() == 0)
        return "";
    
    char ch = s[0];
    
    string ans = move_x(s.substr(1));

    
    if(ch == 'x'){
        return ans + ch ;
        
    }else{
       return (ch + ans);
    }

};


int main(){

    string st = "axxvdxcefxhix";

    cout<< endl;
    cout << move_x(st) << endl;
    return 0;
}