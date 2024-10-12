#include<iostream>
using namespace std;

int main(){
    char arr[500] = "apple";
    
    int i=0;
    while(arr[i] != '\0'){
        cout << arr[i]<<endl;
        i++;
    }
    puts(arr);

    char str1[100];
    cout << "Enter the string str1:";
    gets(str1);
    puts(str1);

    char str2[100];
    cout << "Enter the string str1:";
    cin >> str2 ;
    cout << str2 << endl;
}