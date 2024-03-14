#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std;

int main(){
   
   string str="wgfwhqmdebfjh";
   string str1 ="HJFNJJEVKEWIKJNDC";
    
    //convert uppercase without using inbuilt function 'a'-'A' =32

    for(int i=0;i<str.size();i++){
        if(str[i]>='a'&& str[i]<='z'){
            str[i]-=32;
        }
    }
    cout<<str<<endl;
   
    // convert lowercase without using the inbuit function using ASCII value

     for(int i=0;i<str1.size();i++){
        if(str1[i]>='A'&& str1[i]<='Z'){
            str1[i]+=32;
        }
    }
    cout<<str1<<endl;

    //using inbuilt function

     transform(str.begin(),str.end(),str.begin(),::toupper);
     cout<<str<<endl;
     transform(str1.begin(),str1.end(),str1.begin(),::tolower);
     cout<<str1;

}