#include <iostream>
#include <cstring>
using namespace std;

int main(){
    string s1="fam";
    string s2="fam";

    s2.compare(s1); // True ---> 0 , False ---> 1

    if(s2.compare(s1)==0){
        cout<<"equal";
    }else{
        cout<<"Not equal";
    }

}