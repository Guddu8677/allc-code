/*


 we learn here  about the operator in c++ 


 what is the operator  =: 
it just a symbol  which perform the operation between  two operands 

 5 + 3   two number between pluse sign is the operator 




three catogery of the operator 

 1) Unary  operator   // single operand 

 2) Binary operator   // they work upon two operand 

 3) ternary operator   // this conditional operator need 3 operand 




 Now types of operator 

 1) Airthmatic  operator   + - * / %  ++  -- 

 ++ TWO TYPES  1) PRE-iNREMENT  2) POST-INREMENT 

    1 )  --  PRE-DECREMENT    2) POST-DECREMENT

 2) Relational operator   

 3) Bitwise Operator 

 4) Assignment Operator 

 5) Logical Operator 

 6)  MISSCLENIUS OPERATOR 



*/




#include<iostream>

using namespace std ;

int main(){


// Airthmetic operator 


//    int x , y  ; 
 
//    cout << "Enter a number " <<endl ;

//    cin>> x ;

//     cout << "Enter the second number : "<<endl;

//     cin>> y;

//    cout <<x <<endl;

//    cout <<x++  << "this is the post  increment "<<endl;

//    cout <<++x  << "this is the pre increment "<<endl;
 

//   cout << "addition of two number "<< x + y << endl;

//   cout << "Subtraction of two number " << x - y << endl ;

//   cout << "Multiplication of  two number : " << x * y << endl;

//   cout << "Division of two number : " << x / y << endl ;

//    cout << "Modulus of the two nubmer " << x%y << endl ;
 



// // now  Relational operator 


//  int a  = 10 ; 

//  int b = 67 ;

   
// cout<< "a < b: " << ((a +1)< b ) <<endl;
// cout<< "a > b: " << (a  >  b ) <<endl;
// cout<< "a < b: " << (a <= b ) <<endl;
// cout<< "a < b: " << (a >= b ) <<endl;
// cout<< "a < b: " << ( a == b) <<endl;
// cout<< "a < b: " << ( a = b) <<endl;








// // Now  logical operator 

// // there are three logical operator 
// // and  &&   , or  ||  , not ! 


 
// // here implement the and operator 


// int a, b, c;

// std::cin >> a >> b >> c;

// if(a > b && a > c ){

//    cout<< "this is 'and' operator" << endl;

// }

// else{

//    cout<< "out of the logic so you use the else if  " <<endl;
// }



// // now using the or operator 
// if( a > b  || a  < c ){

//    cout<< "this is 'or' operaotor to if one condition is ture "<<endl;
// }
// else{

// cout << "both of logic is  worong so use correct logic here " <<endl;

// }



// if(a != b  || b != c ){

//    cout<< "this is not operator "<<endl;
// }

// else{

//    cout<< "this outof the logic" <<endl;
// }








// now Bitwise operator  in c++ 
/*

 and &    ,  or |  xor ^  , compliment  ~   , left shift   >> , right shift  <<

*/


// in bitwise and if both are one then it give 1 other wise give the 0





 int a , b;

 cout << "Enther the first number ";
 cin>> a ;

 cout << "enter the second number ";
 cin >> b;

//  if( a & b){


//    cout<<"this is the bitwise  " << a  <<" " << b<<endl;
//  }


//  else{

//    cout<<" its not working "<<endl;

//  }

// this is the Right shift operator 
// int c = a << 3;

// cout  <<"When we sfit the Right 2 bit "<< c<< endl;

// int d = a >> 2;

// cout  <<"when we shift the left two bit : " << d << endl;





// // xor operaotr  in Bitwise operator 


// a = a ^ b;

// b  = a ^ b;

// a  =  a ^ b;

// cout << a << "  " << b;







//     | in bitwise operator 


// if(  a < b  | a < c ){

//  cout << a  <<endl;



// }

//  else {


//    cout <<"this is the c vlaue : "<< c <<endl;
//  }






// // (tile operator ) complement operator in the bitwise operaotr 
//  int f = ~a;

//  cout << "this is the complementary of this : " << f <<endl;






/*
  
 Assingment operator in the c++ 

 == this is the assingment oerator 

 a += 3;   , a-= 2 , *=  , /=  , %= ,  <<= , >>= 

 these way we can use the assingment operator  in c++ 




CONDITIONAL OPERARTOR 
 

  condition  ?:  expert  : expert2

  this way we can write the  conditional operator 



& this is the adress opeartor 

now   cast opearot what is this 

in this convert one data type to another data type 







*/



// int x , y ;

// cout << "Enther the x" ;

// cin>> x ;
// cout<< "Enter the y ";

// cin >> y;




// here using the ternary opearator 


// int c = a > b  ? a +5  : b +6;
// std::cout << c << " " <<endl;





//here using the  address operator 

// int g ;
// int *ptr;

// ptr =  &g;


// cout <<&g;






// here using the typecasting  operator 

float t = 453.43f;
cout << (int)t <<endl;






 // operator precedence  and associative operator  ion c++
  // a = 2 + 3 | 12/6 - 1 << | && 6 % 7 /3 * 5
// in this which have the higher precedene solve  first that  form 
// left to right 



// main point about  the  precedence 

// it is totaly depen on the compile time 



 
    // 2 + 3  | 2-1 | << | && 10

    //  5 |  << 1 && 10

       //  5 | 2 && 10




int h = (2 + 3) | ((12 / 6 - 1) << 1) && (6 % 7 / 3 * 5);



 cout  <<"this is the precedence  : " << h <<endl;



  // in precedence operator increment and devrement 




int u = 3 , v;

v = u++ + ++v;
cout <<u << " " <<v <<endl;





int aa = 3;

int bb = (aa--) + (aa+20);

cout << "decrement precende : " <<bb <<endl;




}

