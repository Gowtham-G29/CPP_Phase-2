#include <iostream>
#include <cstring>
using namespace std;

int main(){
    string s1="fam";
    string s2="ily";

    cout<<s1+s2<<endl; // string concatenation 

    s1.append(s2); // append s2 to s1 at last

    cout<<s1<<endl;
}
