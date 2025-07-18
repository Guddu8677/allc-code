/*

control struture in  c++ 


there are basic three types of control structure 
  1) sequential  =: what ever you writen that read line by line 
  is calles sequencial in c++ code compile line by line it directly run 
  from the main file 


  
   2) selection := under the selection comes the all ,if ,  else i 

     else if  , nested if   , switch



   3) iteration  under the iterative concept comes the 
     
      all loop  like  :- for , while , do- while  , reanfe loop 











*/


#include<iostream>

using namespace std ;

int main (){




int money ;


cout << "Enter the money how much:" ;

cin >> money ;


if(money  > 11){

    cout << "you money is :  " <<money << endl;
}


else{


    cout << "not much moeny to tran : <<endl" ;
}






// now else -if 


if(money < 20){


    cout << "you cnant buy this  : " <<money<<endl ;

}
 

 else if(money  > 2000 ){


 cout<< "you can buy this : "<<money<<endl;

 }

 else{
    cout << "This  is not enougf to buy this : "<<money<<endl;

 }








// now Neste  if  
int a , b ,c ;

cout<<"Enetr the number :"; 
cin>>a>>b;

if(a > b){
   

    cout << "ENther the third number : "<<endl;

   cin>>c;


    if(a > c){

        cout<<"ths is nested lopp a greate than c : "<<endl;

    }


    else {


        cout << "a is less than b or equal to c  : "<<endl;
    }
}

    else {


   cout << "a is less than  or equal to b : " <<endl;
   
   

    
}

 return 0;

 }
