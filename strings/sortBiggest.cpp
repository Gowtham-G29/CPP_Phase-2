//form biggest number from the numeric string

 #include <iostream>
 #include <algorithm>
 #include <cstring>

 using namespace std;

 int main(){
    string s="72378497012893";
    sort(s.begin(),s.end(),greater<int>()); // sort the numeric string

    cout<<s<<endl;
 }