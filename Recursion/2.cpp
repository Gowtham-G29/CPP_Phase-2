#include <iostream>

using namespace std;

int recurse(int n){
    if(n<=1){
        return n;
    }
    return recurse(n-1)+recurse(n-2);
}

int main(){

    cout<<recurse(9);
    
} 


