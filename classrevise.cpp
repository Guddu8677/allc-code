#include<iostream>
using namespace std;


class Car{

private: //this is the member function another  class canot access this data 
    string brand ;

    int  speed ;
public: // this data is visible to evrey one  
     Car(string b , int s): brand(b) , speed(s){}

     void drive(){

        cout<<brand <<" " <<speed <<"km/h\n";
     }

};

int main(){

    Car c1("BMW" , 120); // creating the object and pass the vlaue 
    Car c2("Tesla" , 150);
    c1.drive(); // here  we are  calling 
    c2.drive();
}