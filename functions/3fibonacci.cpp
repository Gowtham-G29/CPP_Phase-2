#include <iostream>

using namespace std;

void fibonacci(int n){
    int t1=0;
    int t2=1;
    int nextTerm;
    for(int i=1;i<=n;i++){
        cout<<t1<<endl;
        nextTerm=t1+t2;
        t1=t2;
        t2=nextTerm;
    }
    return; //void doesnt contain an return value
}

int main(){
    int n;
    cin>>n;
    fibonacci(n);

}