//pass By references

//while using the address(reference) it will change the actual parameter value
// it was directly changed the value in the address of the memory
// while we using pass by reference instead of pass by value it avoid the copy of the values and makes fast execution.


#include <iostream>
#include <string>
#include <vector>

using namespace std;

void pass_by_ref1(int &num);
void pass_by_ref2(string &s);
void pass_by_ref3(vector<string>&v);
void print_vector(const vector<string>&v);

void pass_by_ref1(int &num){
    num =1000;
}

void pass_by_ref2(string &s){
    s="Changed";
}

void pass_by_ref3(vector<string>&v){
    v.clear();//delete
}

void print_vector(const vector<string>&v){
    for(auto s:v){
        cout<<s<<" ";
    }
    cout<<endl;
}

int main(){
    int num{10};
    int another_num{20};

    cout<<"num before calling pass_by_ref1: "<<num<<endl;
    pass_by_ref1(num);
    cout<<"Num after calling pass_by_ref1: "<<num<<endl;//num  changed because we call the references

    cout<<"\nanother_num before calling pass by ref 1: "<<another_num<<endl;
    pass_by_ref1(another_num);
    cout<<"another num after calling pass by ref1: "<<another_num<<endl;



    string name{"Frank"};

    cout<<"\nName before calling pass by value 2 :"<<name<<endl;
    pass_by_ref2(name);
    cout<<"Name after calling pass by value 2: "<<name<<endl; // value not changed

    
    vector<string> stooges{"larry","Moe","curly"};
    cout<<"\nStooges before calling pass_by_value3:";
    print_vector(stooges);
    pass_by_ref3(stooges);
    cout<<"Stooges after calling pass by value 3: ";
    print_vector(stooges);



}