/*

continue statement in c++ 





*/


#include<iostream>

using namespace std;

int main(){

for(int i =1; i<=10; i++){


   // cout << i << endl;

   if(i == 6){


      continue; // it will skip the 6 then i will continue 

   }

   cout<< i <<endl;


}







int data[] = {1, 10,-1 ,5,6,-1 ,5,-99 ,8, 12};

for(auto n : data){


    if(n == -99){

    break;


    }

    else if(n == -1){

        continue;
    }


    cout << n <<endl;
}

}