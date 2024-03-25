//Default argument Values
//Example - single default arguments

#include <iostream>
#include <string>
using namespace std;

double cal_cost(double base_cost=100,double tax_rate=0.06,double shipping_charges=3.50); //use the default argument values in function prototypes

void greeting(string name,string prefix="Mr.",string suffix="B.E");

double cal_cost(double base_cost,double tax_rate,double shipping_charges){
    return base_cost+=(base_cost*tax_rate)+shipping_charges;
}


void greeting(string name,string prefix,string suffix){
    cout<<"Hello "<<prefix<<" "<<name<<" "<<suffix<<endl;
}


int main(){
    double cost{0};
    cost = cal_cost(100.0,0.08,4.25); // will use no defaults
    cout<<cost<<endl;
    cost = cal_cost(100.0,0.08);//will use default shippings
    cout<<cost<<endl;
    cost=cal_cost(200.0);//will use defaults tax and shipping
    cout<<cost<<endl;
    cost=cal_cost(); //will use all the default values
    cout<<cost<<endl;

    greeting("Gowtham","Dr.","MBBS"); // not used any default parameters
    greeting("Gowtham");//uses the default prefix and suffixes

}