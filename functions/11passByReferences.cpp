//pass by refernces

//while using the address(reference) it will change the actual parameter value
// it was directly changed the value in the address of the memory
// while we using pass by reference instead of pass by value it avoid the copy of the values and makes fast execution.


#include <iostream> 

using namespace std;

void scale_number(int &num);//prototype

int main(){
    int number{1000};
    scale_number(number);//call
    cout<<number<<endl;//100
}

void scale_number(int &num){ //definition
    if(num>100){
        num=100;
    }
}