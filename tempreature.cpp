#include<iostream>

using namespace std;
int main (){


int f=0;

int c ;


while(f <= 300){
// this is the worng way it will give the wrong answer because 
// if you multiply the any number with 0 it will givew you the 0 ans


 // int c = (5/9)*(f-32); 
  c = (5*(f-32))/9;


  cout <<f<<" " <<c;

  f = f+20;





}


return 0;

}