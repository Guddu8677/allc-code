/*


do_while loop in c++ 


do {

statement block ;

}

while(condition); 




*/


#include<iostream>

using namespace std;

int main(){

 int i =0;  // INTIALIZATION 
do{   //atlest one time it give the output if condition is false 

    cout << "hey this is do while loop :" <<endl;
} while(i >0);

cout << "OUT OF the loop :" <<endl;
    



int num;

do{

    cout << "Enter a nubmer between 1 to 10"<<endl;

    cin >> num;

}while(num <= 0  || num >= 11);

cout << "you enterd a correct number : "<<endl;





///exercise for the do-while loop 

// int number = 0 , sum =0 ;

// do{

// sum = sum + number;
// cout << "Enter a number : " <<endl;

// cin >> number ;

// //sum = sum + number; //if you dont want to - these value then this line write on the top

// }while(number >= 0);

// cout <<"total sum is the : "<<sum  <<endl;








//simple calculator  using the do_while loop 

int a , b;


char  choice;

int sum =0 , sub =0, mul=0, Div=0 ;

do{


    int a , b  ;


   cout <<" 1. Addition :" <<endl;

   cout <<" 2. Subtraction : "<<endl;

   cout <<" 3. multiplication : " << endl;

   cout << "4. Division : "<<endl;

   cout << "Q. exit from the calculator  : "<<endl;

   

   cout << "Enter you chice : "<<endl;

   cin >> choice ;



if(choice == '1'){


cout << "You choose 1 ... for Addition : "<<endl;

cout <<"Enter two number  seprate : " <<endl;

cin >>a >>b;
sum =a + b;

cout << "Addition is : " <<sum <<endl;

}


else if(choice == '2'){

cout << "You choose 2 ... for Subtraction  : "<<endl;

cout <<"Enter two number  seprate : " <<endl;

cin >>a >>b;
sum =a - b;
cout << "subtraction is : "<<sub <<endl;

}
else if(choice == '3'){

cout << "You choose 3 ... for Multiplication   : "<<endl;

cout <<"Enter two number  seprate : " <<endl;

cin >>a >>b;
mul =a * b;
cout << "Multiplication  is : "<<mul <<endl;

}
else if(choice == '4'){

cout << "You choose 4 ... for Division   : "<<endl;

cout <<"Enter two number  seprate : " <<endl;

cin >>a >>b;
Div =a / b;
cout << "Division  is : "<<Div <<endl;

}
else if(choice == 'Q' || choice == 'q'){



cout << "Good bye... : "<<endl;



}

else{


    cout <<"wrong choice try again   : "<<endl;
}
  

}while(choice != 'q' && choice != 'Q');

return 0;



}