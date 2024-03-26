//Overloading function 

//Example

//same function name but different datatype , its ok when the return type and value is passed in the function call but it is give error when the empty fuction call.


#include <iostream>
using namespace std;

int add_numbers(int,int);
double add_numbers(double,double);



int main(){

cout<<add_numbers(10,20)<<endl;
cout<<add_numbers(10.0,20.0)<<endl;



}


//function Definition

int add_numbers(int a,int b){
    return a+b;
}

double add_numbers(double a,double b){
    return a+b;
}