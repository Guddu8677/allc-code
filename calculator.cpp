 #include<iostream>

 using namespace std;

int main(){

int num , num1 , total;

char ope;




cout<< " Enter  here first number :"  <<endl;

cin>>num ;


cout<< "Enter second number :  " <<endl;

cin >> num1;



cout << "Enter which operation want to perform(+ , - , *  , /) : = " <<endl;


cin >> ope;





switch (ope)
{
    case '+':
        total = num + num1;
        cout << total;
        break;

    case '-':
        total = num - num1;
        cout << total;
        break;

    case '*':
        total  = num * num1;
        cout <<total;
        break;

    case '/':
        total = num * num1;
        cout << total;
        break;

        
    default:
        cout <<"you enterd wrong operation ";
        break;
}






return 0;


}





// #include<iostream>


// using namespace std;

// int main(){



//     int n1  , n2  , re;

//    char oper;

//     cin >>n1 ;

//      cin >> n2;


//      cin >> oper;


//      if(oper == '+'){


//         re = n1 + n2;
//      }

//      else if( oper == '-'){


//         re - n1 - n2;
//      }


//      else if( oper == '*'){


//         re = n1 *  n2;

//      }
     

//      else if( oper == '/'){

//         re = n1 / n2;

//      }

//      else{

//         cout << " Enter  the wroing oper";
//      }


//      cout <<re;


//      return 0;

// }