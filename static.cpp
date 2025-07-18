#include<iostream>

using namespace std; 


class Demo{

    public :
      int xin  ,  yin;

      static int x , y;
     static void get(){

        int x= 10 ;  int y = 20;
      }

     static void put(){

        cout <<"value ods x" <<x <<endl;

        cout <<"value of y:  "<<y <<endl;

      }
};


int Demo :: x = 10;

int Demo :: y = 20;

int main(){

Demo obj;
cin>>obj.xin >> obj.yin;

Demo::get();
Demo :: put();

cout <<"value  total is: "<<obj.xin <<endl;
cout <<"total is : "<<obj.yin << endl;

return 0;
}