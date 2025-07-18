#include<iostream> 

using namespace std ;

class student {

private:
 
       char name[30];

        int  roll ;

        public: 

           void  getdata(){


            cout << "enter the name : " <<endl;

            cin >> name  ;
             cout <<endl;
         cout<< "Enter the  rool number: " << endl;
             cin >> roll;




           }

           void display(){


            cout <<" name is the " << name <<endl;

            cout << "roll number is the : " <<roll <<endl;

           }


};



int  main(){

  student  obj ;

  obj.getdata();

  obj.display();

}