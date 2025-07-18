// input and output from the user  in c++ 

//cout  standard output    this is   ostream 

// cin  standard input   this is  istream

// cerr standard error   this is  ostream 

// clog standard  buffer (general information )   this is  ostream 



#include<iostream>

using namespace std;

int  main( )  {

  char name [50];

  int age ;

   cout << "Enter  you name " << endl;

    cin >> name ;

  

     cout << "Enter your age " <<endl;

      cin >> age  ;


      cout <<"Your name is : " << name << endl;

      cout <<"your age is : "<< age <<endl;

}