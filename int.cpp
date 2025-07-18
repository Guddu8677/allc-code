/*
integer data type in c++ 

unsigned int  = uSrot = 56 

signedint  sSort = -66
int a = 99 ;

long int  long = 3453452;
long long int max=  344534453;



*/


#include<iostream>
using std::cout ;
using std:: cin;

using std::endl;


int main(){


    unsigned  short u_sort = 56;

    signed short   sinSort = -4;

     int a = 34;

      long int b = 44343;

      long long int c = 344343434;



    cout<<"size of the unsingend  := "<<sizeof(u_sort) <<endl;

    cout<<"size of the sigend := " << sizeof(sinSort) <<endl;

    cout<<"size of the int := " << sizeof(a) <<endl;
    cout<<"sized of the long int := "<<sizeof(b) <<endl;

    cout<<"sized of hte long long int  : = "<<sizeof(c) <<endl;



}