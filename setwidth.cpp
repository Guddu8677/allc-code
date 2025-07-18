#include<iostream> 
#include<iomanip>

using namespace  std;

int main(){


 char name[100];
 int age;
 char gender ;

 cout <<"enter  name " <<name<<endl;
 cin >> name ;

 cout << "Enter age : "<<endl;

 cin >> age;

 cout << "enter the gender : "<<endl;

 cin>> gender;


 cout << "|------------------|-------------|------------|"<<endl;
 cout << "| Name             | age         | gender     |"<<endl;
 cout<<  "|------------------|-------------|------------|"<<endl;

 cout <<"|" <<setw(8)<< name  <<setw(11)<<"|"<<setw(5)<<age<<setw(9) <<"|" <<setw(5)<<gender <<setw(8) <<"|"<<endl;

 cout<<  "|------------------|-------------|------------|"<<endl;
 cout<<"|" <<setw(8)<< name  <<setw(11)<<"|"<<setw(5)<<age<<setw(9) <<"|" <<setw(5)<<gender <<setw(8) <<"|"<<endl;
 cout<<  "|------------------|-------------|------------|"<<endl;


}