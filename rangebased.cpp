/*

range based for  loop in c++

for(reange-declaration  : range - expression )
  {
    
   statements 

  
  }


*/



#include<iostream>

#include<vector>
using namespace std;


int main(){

// int a[] = {2,4,3,45};

// vector<int> a = {2 ,4,5,3};

// for(auto b : a){

// cout << b <<endl;


    
// }





vector<int>num = {1,3,4,2,4,2,4,4,5,6,8,5,7};
  int count = 0;
for(int n : num){

   cout <<  n << " ";
    // if(n % 2 == 0  ||  n % 3 == 0){

    //    count++;
    //    // cout <<"these are the number divisible by 3 and 2 :"<< n<<endl;
    // }
}

//cout << "total divisble number is : " <<count <<endl;










}