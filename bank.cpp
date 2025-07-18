#include<iostream>

using namespace std;

int main(){


 char  d  ,  w , D , m ;


char option;





int banktime  = 6;

int queue ;
 
 cout << "enter  how many customer in bank :  ";
 cin >> queue;

 cout <<"Enter the bank time ";
  cin  >> banktime;

cout << " enter option if bank is  open ";
cin >> option ;

if(queue == 0 && banktime == 6){

  cout <<" Then  Bnak is  close ";

}




 else if( option == 'd'){


        cout <<" how to deposite  money ";
    }

  else if(option == 'm' ){


    cout << "How to save in the draft ";
  }

  else if(option == 'D' ){

    cout << "this save in the draft ";
  }

  else if(option == 'w'){

    cout << " you can widro";
  }
 




    return 0;


}