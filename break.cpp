/*

break in  c++ 




*/


#include<iostream>

using namespace std; 

int main (){


    for(int i=1; i <= 10; i++){

    if(i ==7){


        break;
    }
        cout << i <<"\n";


    
    }














for(int i =0; i < 4; i++){


    for(int j =1 ; j <5; j++){

        if(j ==3){


            break;   // when i =3 it stop the iteration an come out from the loop
        }

        cout <<"i = " <<i <<" "<< "j = " <<j <<endl;
    }
}
}