# Recursion 

 Recursion is a function that call itself

 ![alt text][def]

[def]: <Screenshot 2024-03-14 232907.png>

##### Syntax

   int func(){
    ------
    -----
    func();
    ----
     }

##### Points 

1.it is like a while loop runs until the condition is true .
2. condition must be given for when the recursion is stop 

    example:
 ##### In Recursion:

       int func(int n){
         if(n==1){
            return 1;    ----> This a condition
         }
         return n+func(n-1); ----->value updation
       }
       int main(){
         int ans=func(5);
         cout<<ans;
       }

  ##### In loop:

         int ans =0;
         int n=1;

         while(n<=5){  ------> This is a condition
            ans+=n;
            n++;       ------>value updation
         }

## Example program


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

**Execution**

recursion (1) + recursion (0)
 1              +       0           

recursion (2) + recursion (1)
   1              +       1           

recursion (3) + recursion (2)
   2              +       1            

recursion (4) + recursion (3)
  3              +       2           

recursion (5) + recursion (4)
   5              +       3           

recursion (6) =>   8 

              