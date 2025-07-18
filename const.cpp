// #include<iostream>

//   #define a = 56 ; // if you use this = then if  give the error 

// using namespace std;
//  int main(){

//   int b=6;

//    cout <<"b: " << b <<endl;
//    cout <<"a: " << a <<endl;

//   b = 8;

//   cout <<"updated value: "<<b<< endl;


//  }






#include <iostream>

#define a 45  // Correct way to define a macro

using namespace std;

int main() {
    int b = 9;

    cout << "b: " << b << endl;
    cout << "a: " << a << endl;  // Using macro directly

    b = 8;

    cout << "Updated b: " << b << endl;

    return 0;
}
