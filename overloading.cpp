#include<iostream>

#include<string>

using namespace std;

void  fun(int );

void fun(string);









int main(){
 fun(5);

 fun("Guddu kumar ");


}



void fun(int a ){


    cout <<"printing integer value :" <<a <<endl;

}


void  fun(string str){


    cout << "printing string value : "<< str <<endl;

}