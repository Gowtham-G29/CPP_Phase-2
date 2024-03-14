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
       int func(int n){
         if(n==1){
            return 1;    ----> This a condition
         }
         return n+func(n-1);
       }
       int main(){
         int ans=func(5);
         cout<<ans;
       }