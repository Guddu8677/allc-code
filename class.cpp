#include<iostream>
#include<string>
using namespace std ;



class Student {

public:


string name;

int age;

void Display(){

    cout << "Name " <<name << " , Age " << age <<endl;



}

};
int main (){


    Student s;

    s.name = "Guddu";

    s.age=20;

    s.Display();

}