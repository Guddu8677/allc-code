#include<iostream>

using  namespace std; 



void  greet(string  name ,  string prefix );






int main(){



    greet("Rahul ", "mr");
 
     return 0;



}


void greet(string name,  string prefix){


    cout << "Hi " <<prefix + " " + name <<endl;
}