// Random Number generation
#include <iostream>
#include <cstdlib>  //Requird for rand()
#include <ctime>    //required for time()

using namespace std;

int main(){
    int random_number{0};
    size_t count{10}; //number of random numbers to generate
    int min =1;
    int max =10;

    for(size_t i=1;i<=count;i++){
        random_number=rand()%max+min; //generate a random number[min,max]
        cout<<random_number<<endl;
    }

}