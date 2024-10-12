#include<iostream>
#include<algorithm>
#include<cstring>

using namespace std;

int main(){

    string str = "693507590";

    sort(str.begin(),str.end(),greater<int>());

    cout << str << endl;


    




    return 0;
}