/*

Switch case in c++ 


*/




#include<iostream>
using namespace std ;

int main(){

char ch;

cout<<"Enter your choice : ";

cin>>ch;

switch (ch)
{
case 'a':
    /* code */
    cout <<"I wanna know my balance : " <<endl;

    break;


case 'A':

 cout<< "I wanna register a coplain : "<<endl;
 break;

 case 'c':

 cout <<" out of swithc case : "<<endl;


default:


cout <<"Enter a valid choice :";

    break;
}

}