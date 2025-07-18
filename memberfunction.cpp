/*

what is the member function c++ 




*/

#include<iostream>
#include<string>
using namespace std;

int main(){


    string str= "guddu learning c++ ";

    string:: iterator it ;

    for(it= str.begin(); it != str.end(); it++){

        cout << *it <<" ";
    }

    cout << endl;


    str.append("hello how is josh now ");

    cout << str <<endl;

    cout<<str.substr(0 , 3) <<endl;

    cout <<str.find("hello") <<endl;

    cout <<str.max_size() <<endl;
    cout <<str.length() <<endl;

   str.clear();






}