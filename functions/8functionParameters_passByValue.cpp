// Function Parameters - passbyvalue
//Take just a concepts

// pass by value makes only the copy after function excution it will deleted , it doesnt change the actual value.


#include <iostream>
#include <string>
#include <vector>

using namespace std;

void pass_by_value1(int num);
void pass_by_value2(string s);
void pass_by_value3(vector<string>v);
void print_vector(vector<string>v);

void pass_by_value1(int num){
    num =100;
}

void pass_by_value2(string s){
    s="Changed";
}

void pass_by_value3(vector<string>v){
    v.clear();
}

void print_vector(vector<string>v){
    for(auto s:v){
        cout<<s<<" ";
    }
    cout<<endl;
}

int main(){
    int num{10};
    int another_num{20};

    cout<<"num before calling pass_by_value1: "<<num<<endl;
    pass_by_value1(num);
    cout<<"Num after calling pass_by_value1: "<<num<<endl;//num not changed

    cout<<"\nanother_num before calling pass by value 1: "<<another_num<<endl;
    cout<<"another num after calling pass by value1: "<<another_num<<endl;



    string name{"Frank"};

    cout<<"\nName before calling pass by value 2 :"<<name<<endl;
    pass_by_value2(name);
    cout<<"Name after calling pass by value 2: "<<name<<endl; // value not changed

    
    vector<string> stooges{"larry","Moe","curly"};
    cout<<"\nStooges before calling pass_by_value3:";
    print_vector(stooges);
    pass_by_value3(stooges);
    cout<<"Stooges after calling pass by value 3: ";
    print_vector(stooges);



}