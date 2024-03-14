#include <iostream>
#include <cstring>
using namespace std;

int main(){
    string s1="fam";

    cout<<s1<<endl;

    s1.clear();

    if(s1.empty()){ // check whelther the string is empty 
        cout<<" string is empty";
    }else {
        cout<<"Have some string";
    }
    



}