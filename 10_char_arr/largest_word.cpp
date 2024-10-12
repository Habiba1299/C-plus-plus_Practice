#include<iostream>
#include<cstring>
using namespace std;


int main(){

    char str[100];
    cout << "Enter the string :";
    gets(str); 
    // cout << strlen(str)<< endl;
    // int len = strlen(str);
    int count = 0, max_length = 0,end ;

    for(int i = 0; str[i] != '\0'; i++){
        if(str[i] == ' '){
            count = -1;
        }
        count++;
        if(max_length < count){
            max_length = count;
            end = i;
        }
    }

    cout << " the largest word is length of "<< max_length <<":";

    for(int i =end - max_length+1; i <= end; i++){
        cout<< str[i];
    }cout << endl;
    

    return 0;
    
}