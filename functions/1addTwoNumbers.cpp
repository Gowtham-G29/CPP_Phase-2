#include <iostream>

using namespace std;

void print(int num){
    cout<<num<<endl;
    return;
}

int add(int num1,int num2){ //function declaration
    print(num1);
    print(num2);
    int sum=num1+num2;
    return sum; // return is very important
}

int main(){

    int a=2;
    int b=3;
    cout<<add(a,b)<<endl;

    // add(parameter1 ,parameter2)----> this is a function call
     
}