/*
char data type  in c++ 

character system 


*/


#include<iostream>

using namespace std;


int main(){

    char c= 'a';

    char gg = 'b';


     cout<<c <<endl;

//  now type casting into the int 

    cout<<(int)gg <<endl;
    cout<<(float)gg <<endl;
    //cout<<(string)gg <<endl;
    cout<<(long int)gg <<endl;






// wie character  in c++ 

// w = wide , char = character ,  t= type 
 wchar_t  ch = L'G';

 cout << ch <<endl ;

 cout << "this is the wide character "  <<sizeof(ch) <<endl;


  cout<<ch;
}

