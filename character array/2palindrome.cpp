#include <iostream>

using namespace std;

int main(){
 
 int n;
 cin>>n;

 char arr[n+1]; // character array have a last index /0--->null character it defines the character array;

 cin>>arr;

 bool check =1;

 for(int i=0;i<n;i++){
    if(arr[i]!=arr[n-1-i]){
        check =0;
        break;
    }
 }
  if(check==true){
    cout<<"word is a palindrome";
  }else{
    cout<<"Word is a not a palindrome";
  }
}
