# functions 

** syntax;**

  returnType functionName(parameter 1,parameter 2,.......){
    // function body

   ######  return the final value is must


  }
 ### steps:

 1 function declaration 
 2.return
 3.function call inside the main function

 ### points 
   1.Only name of the variables are passed inside the function call not their types while calling functions  
   
   2.We pass the values ,not variables themselves .Local variable are created in functions which are destroyed on returning from them.

   3.function can be called from any other functions or main function.

   4.Function allows the modularization ofa program.
     separate code into logical self_contained units.
     These units can be reused.

#### Function Prototypes

  The compiler must 'Know ' about a function before it is used.
  it is used for larger programs No problem in small programs.
  ##### syntax:
   int function_name(); // prototype

   int fuction_name(int a){
    //statement
   }