#include<iostream>
#include<algorithm>
#include<cstring>

using namespace std;

int main(){

    string str = "agdjsgfkah khhj 7^&*";
    
    cout<< "========== convert uppercase=========" << endl;
    int i = 0;
    while(str[i] != '\0' ){
        if(str[i] >= 'a' && str[i] <= 'z'){
            str[i] -= ('a'-'A');
        }

        i++;
    } 

    cout<< str << endl;
    cout<< "========== convert lowercase=========" << endl;

    for(int i = 0; i < str.size(); i++){
        
        if(str[i] >= 'A' && str[i] <= 'Z'){
            str[i] += ('a'-'A');
        }
    }

    cout<< str << endl;

    // in-built function

    cout<< "========== convert uppercase=========" << endl;

    string s = "dgsfdhafdhyT 789 jkh";

    transform(s.begin(), s.end() , s.begin(), ::toupper);

    cout << s << endl;

    cout<< "========== convert lowercase=========" << endl;


    transform(s.begin(), s.end() , s.begin(), ::tolower);

    cout << s << endl;




    return 0;
}