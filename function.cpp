/*

introuction in  to function c++ 

what is the  function 

funtion is that ignore the repeating same thing 




read input 
do dependeny 

print output



initialization of the function 

return type  function_name (parameter1, parameter2 , ....){

  
statement


return statement
}


*/

#include<iostream>
#include<iomanip>

using namespace std;


int add(int a , int b){

  return a + b;


}

int main(){
 int a , b;
cout << "Enter the first number " << endl;
cin >> a ;
  cout << "Enter the second number " <<endl ;

  cin >> b;


   int  result = add(a , b);
  

cout << "The sum of two number is " <<result <<endl;
add(a,b);
cout << add;
     
}