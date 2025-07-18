/*
memorey allocation  and relesed in c++ 

using the  NEW keyword to allocate the memorey in c++ 

using the  delete keyword  to relesed the memorey in c++




*/



#include<iostream>
using namespace std;

int main(){

    int num = 5;

    float* ptr;
 

 //memorey allocation of 
 //num numbers of float 
    ptr = new float[num];



    for(int i =0; i < num; i++){
     

     *(ptr + i)  = i;
        

    }

    cout << "Display the cgpa of the students : "<<endl;

    for(int i =0;  i < num; i++){


        cout << "Student " <<i + 1 <<" : " <<*(ptr + 1) <<endl;





    }


 // here we relese the memorey 
    delete[] ptr;

    return 0;


}