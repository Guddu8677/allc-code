/*

take a first_name witout taking any space in string 

1 ) declare & initialize a string variable f_name from variable full_name;

2) Declare and intializxe a string variable l_name using substr() method 

3) Concatinate f_nanme and l_name using + operator insted a space using insert() function 



*/

#include<iostream>
#include<string>

using namespace std;

int main(){


string full_name = "Guddukumardas";
// string f_name= full_name.substr(0, full_name.find(' '));
// string l_name = full_name.substr(full_name.find(' ') + 1  );

string f_name {full_name,0,13};
string l_name = full_name.substr(10 , 3);

cout << "First name " << f_name <<endl;
cout << "last name : "<< l_name<<endl;

 string formatedfull_name = f_name +l_name;

 formatedfull_name.insert(5, " ");
 formatedfull_name.insert(11, " " );

cout << formatedfull_name <<endl;


cout << f_name + l_name << endl;

}