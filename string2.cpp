/*

c++ string  now 


what is the function 

member function c++  

*/

#include<iostream>
#include<string>

#include<utility>
#include<algorithm>
#include<cstring>

using namespace std;

int main(){

string str;
string str2 = {"hello world " , 10}; // it cout the string from the 0 to 10
cout << str2 <<endl;



str = "guddu kumar das " ;

cout<<str <<endl;


// to take the  complete line string input  use the getline function 
string str4 ;
 
cout << "Enter the string :";
getline(cin , str4);

cout << str4 <<endl; 
 

// how to accesse the particular index 

 string str5 ;
 str5  = ("hello accesse the any string index wise ");

 cout << str5[3] <<endl;
 cout << str5[8] <<endl;

for(char c : str5){ // it also can convert in another data type 


    cout << c <<" ";
}
// now concatinate the string 

 cout << str4 <<" + "  + str2;

}