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
     return 0;
}

// substring("ABC", "")
// ├── substring("BC", "")
// │   ├── substring("C", "")
// │   │   ├── substring("", "")  → prints: ""
// │   │   └── substring("", "C") → prints: "C"
// │   └── substring("C", "B")
// │       ├── substring("", "B") → prints: "B"
// │       └── substring("", "BC") → prints: "BC"
// └── substring("BC", "A")
//     ├── substring("C", "A")
//     │   ├── substring("", "A") → prints: "A"
//     │   └── substring("", "AC") → prints: "AC"
//     └── substring("C", "AB")
//         ├── substring("", "AB") → prints: "AB"
//         └── substring("", "ABC") → prints: "ABC"
