/*

string in c++ 
in c++ two way we can declare the string 
1) c-style string 
 start with c string 

2)  c++ string 


*/


#include<iostream>
#include<vector>
#include<algorithm>
#include<cstring>

using namespace std;

int main (){

  
    char sa[20];
    
    string  s ;
    char gu[30];


    cout <<"Enter the first charactr : ";
    cin>> sa;
    cout << "Enter the string: ";
    cin >> s;

    cout<< "enter the second character: ";
    cin.getline(gu, 50);

    cout << strlen(sa) << " and  print hte character :" <<sa <<endl;
  

     // getline(cin, s);
    cout<< s <<endl;
 

    cout << gu<<endl;



  cout << strcpy(gu, sa) <<endl;











}





