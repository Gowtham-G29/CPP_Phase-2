#include <iostream>
#include <vector>
#include <string>

using namespace std;

void print(int);
void print(double);
void print(string);
void print(string,string);
void print(vector<string>);

void print(int num){
    cout<<"Printing Int:"<<num<<endl;
}
void print(double num){
    cout<<"Printing double:"<<num<<endl;
}

void print(string s){
    cout<<"Printing string:"<<s<<endl;
}

void print(string s,string t){
    cout<<"Printing 2 strings:"<<s<<" and "<<t<<endl;

}

void print(vector<string> v){
    cout<<"Printing vector of Strings:";
    for(auto s:v){
        cout<<s+" ";
    }
    cout<<endl;
}

int main(){
    print(100);//int
    print('A');//character is always promoted to int should print 65
    print(123.5);//double
    print(123.3F);//float is promoted to double
    print("C-style string");//c-style string is now coverted to c++ style
    string s{"c++ string"};
    print(s);//c++ string

    print("C-style string",s);//first argument is converted to C++ style string

    vector<string> stooges{"lary","Moe","Curly"};
    print(stooges);


    // Above conditions are not problem and also if we put default arguments it takes that default value
    // but its has problem in default arguments two datatypes has a default arguments it will shows error,
    // for example
    //int print(int=100);
    //int double(double=12.5);
    // print();-----> this condition makes the compile time error
     // so careful about default values in function overloading
}