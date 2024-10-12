#include<iostream>
#include<algorithm>
#include<cstring>

using namespace std;

int main(){
    
    cout<<"=============concatenation=========="<< endl;
    string s1 = "fam" , s2="ily";

    cout << s1 + s2 << endl;

    s1.append(s2);
    cout<< s1 << endl; // This change the s1 string entirely

    cout<<"=============clear /  empty=========="<< endl; 

    string ac = "fhjsdgfjsdgk ghdfghsk hjdgzfgsf";
    
    cout << "the string is :"<< ac << endl;;
    ac.clear();
    if(ac.empty())
       cout<<"string is empty"<<endl;
    
    cout<<"=============compare string=========="<< endl;
    
    cout<<  s2.compare(s1) << endl;
    //positive --> greater
    //negative ---> smaller
    // zero ----> equal

    if(s1.compare(s2)== 0){
        cout<< "strings are equal";
    }else if(s1.compare(s2)== 0)
        cout << "s1 is greater than s2"<< endl;
    else
       cout << "s1 is smaller than s2"<< endl;

    cout<<"=============erase=========="<< endl;

    string str = "nincompoop";
    
    str.erase(3,3);

    cout << str << endl;

    cout<<"=============find=========="<< endl;

    string str1 = "nincompoop";

    cout<<str1.find("poo")<< endl;
    
    cout<<"=============insert=========="<< endl;

    string str2 = "nincompoop";
    
    str2.insert(2,"lol");

    cout << str2 << endl;

   cout<<"=============length=========="<< endl;

   string s3 = "acd efg";
   cout << str.length() << endl;
   cout << str.size() << endl;

   cout<<"=============substring=========="<< endl;

   string str3 = "i have a pet cat";
   string s = str3.substr(13,3);
   cout  << s << endl;

   cout<<"=============string to number=========="<< endl;

   string s6 = "600.04";
   int x1 = stoi(s6);
   cout << x1+4 << endl;

  
   float x2 = stof(s6);
   cout << x2+3 << endl;

   double x3 = stod(s6);
   cout << x3+5 << endl;

   cout<<"=============number to string=========="<< endl;

   int x = 789;

   cout<< to_string(x) + "2"<<endl;

   float y = 789.65;

   cout<< to_string(y) + "2"<<endl;

   double z = 789.976;

   cout<< to_string(z) + "2"<<endl;

   cout<<"=============sort string=========="<< endl;

   string s7 = "cvhjijsl";

   sort(s7.begin(),s7.end());
   cout << s7 << endl;
 
    return 0;
}