#include <iostream>

using namespace std;

int  main(){
    string s1="abcdabab";

    cout<<s1.find("ab")<<endl; // returns the index values from left
    cout<<s1.rfind("ab")<<endl;// right
}