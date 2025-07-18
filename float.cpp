/*
flaot data type in c++ 

it always end with a = 3.23f 
other  wise  it take in the  form if double  type 

we can alos  use the set precison in the c++ for the after  proint the   point vlaue 

cout <<set<<precision(3);




 double    8 bytes 


  and  

  long double  it take 12 bytes 
*/


 #include<iostream>
 #include<iomanip>

 using std:: cout ;

 using std:: cin;

using std:: endl;

using std :: setprecision;


  int main (){


     float g = 45.6533f;

     double dd = 4.4354;

     long double ff = 33.249;


     cout<<setprecision(2) <<g <<endl;

     cout<<setprecision(2)<<dd <<endl;

   cout<<setprecision(2) << ff << endl;


     return 0;

  } 