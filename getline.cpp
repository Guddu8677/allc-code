#include<iostream>

using namespace std; 

#include<string>

int main (){


    string str ;

     cout<<"Enter the any string :";

     getline(cin , str);

     cout << "this is you string : " <<str <<endl;
     cout<< "length of the string : " <<str.length() <<endl;


     cout<< "utadate the at index :" <<str.at(3) <<endl;

     cout<< "add the text at the end  using append : " << str.append(" Das") <<endl;


     cout << "return the substring : " << str.substr(2 , 5) <<endl;

     cout << "find  the text  here : " << str.find("dd") <<endl;
     
     cout <<"Erase the position :" <<str.erase(1 , 4) <<endl;


     cout << "insert the text any position : "<<str.insert(2 , "bhaiya ")  <<endl;

     cout << "compare  the  two string " <<str.compare("kumar")  <<endl;


}