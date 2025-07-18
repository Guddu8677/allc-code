#include<iostream>
#include<cstring>

using namespace std;  


class person {


     char name[30];

      int age ;

       char gender[10];

       public:

       void getdata(){


        cin >> name >>age >> gender;
       }

       void putdata(){

           for(int i =0;  i<strlen(name); i++){

           cout <<char(toupper(name[i]));

           cout <<age << " ";
      
          for(int i =0; i < strlen(gender); i++){

            cout << char(toupper(gender[i]));
          }

 
           }
           
           
           
                  }
};


int main (){


    person obj ;

  obj.getdata();

  obj.putdata();


  
  return 0;

}