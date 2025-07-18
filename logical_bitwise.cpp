// logical and   bitwise  operator  in c++


#include<iostream>

using namespace std ;

int main(){


    // logical operator in c++ 

    // and , or , not 
    // this is and operator 

    int a , b  ,e;

    cout << "Enter the first number " ;

    cin >> a; 

    cout <<" Enter the second value : ";

    cin >> b ;

    cout <<" Enter the third value : ";

    cin >> e;

    int c = a >b && a > e ;

    cout  << c << endl;




// this is the  OR operator 


    int  d = a > b || a > c;

    cout<<d <<endl;



    //not operator 


    int g = !a;

    cout << g <<endl;




    // bitwise opearator 

    // and & , or |  , not ! , complement ~  , xor ^ ,  <<rigth shift , leftshift >> 











}