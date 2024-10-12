#include<iostream>
using namespace std;

//only for consecutive duplicate

string remove_duplicate(string s){

    if(s.length() == 0)
        return "";
    
    char ch = s[0];
    string ans = remove_duplicate(s.substr(1));
    
    if(ch == ans[0]){
        return ans;
    }else{
       return (ch + ans);
    }

};


int main(){

    string st = "aaaabbbeeecdddd";

    cout<< endl;
    cout << remove_duplicate(st) << endl;
    return 0;
}