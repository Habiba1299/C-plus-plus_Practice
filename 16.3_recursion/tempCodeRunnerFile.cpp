#include<iostream>
using namespace std;


void substring(string s,string ans){

    if(s.length() == 0){
        cout<< ans<< endl;
        return;
    }

    char ch= s[0];

    string res = s.substr(1);

    substring(res,ans);
    substring(res,ans+ch);
}

int main (){
     substring("ABC"," ");
}