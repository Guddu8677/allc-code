#include<iostream>

using namespace std;

int main(){



// find  the three largest  number 

int a,  b , c ;

cin >> a >> b >> c ;


cout  << a << endl ; 

cout << b << endl ; 

cout << c  <<endl;

// now compare the  which number  is largest number 

if(a > b && a > c){

   cout << a << " this is the greast  number "  <<endl;   
}

 else if( b > a  && b > c){


    cout << b << "  b is the greater  number " <<endl;
 }

 else if( c > a && c > b) {

    cout << c << " c is the greater number ";
 }
else {


    cout<< " this  is  the werong way  tho find   the number ";
}

return 0;


}