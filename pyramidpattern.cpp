
// pyramid pattern 

// letter pyramid from user given string







#include<iostream>
#include<string>


using namespace std;


int main(){



    string letters ;

    cout<< "Enter the string to create pyramid : ";

    getline(cin , letters);

   int len = letters.length();
   int possition = 0; 

   for(char c: letters){


    int spaces = len - (possition + 1);

    while(spaces >0){
    cout<<" ";
    --spaces; 

    }


   
   

   for(int i=0; i < possition; i++){
 

    cout << letters.at(i);


   }

   cout <<c;
} 


}