/*


   STL  = standard template library 

   vector in c++ 

   vector is also a container  it also store similar data type of data 

   the size of vector automaticly increase and decrese at run time 


vector can changes there size at run time 

that why we called vector is a Dynamic arrays 







*/


#include<iostream>

#include<vector>


using namespace std;

int main (){

 // vector provides two way to access element 
 // 1) arr[]  it dose not check wether the index is within the  range 
  
  // accessing and out-of-bounds index result in undefiend 





  // 2) arr.at() it does perform bound checking 
  // if the index is out of range it throw and  out of range 


 
   //  vector<int>  arr = {3,5,3,5};
   // cout<<arr[6]; // bound  cheking w





// vector<int>array={2,6,2,5,5,6};

//   try{

//    cout<<array.at(5);
//   }

//   catch(const out_of_range& e){


//    cout<<"Earror : "<<e.what() <<endl;
//   }





// vector<int> number;

// number.push_back(4);
// number.push_back(4);
// number.push_back(45);
// number.push_back(46);
// you can also chek the number of  the size and capacity usign the fucntion 

// if you increase the size capacity will be cange but 
// cout << "Size of the number " <<number.size() <<endl;

// cout <<"Capacity of the nubmer " <<number.capacity()<<endl;


//cout<<number[0];







// another way to intialize the size and value  in the vector 
  // (10 , 5) 10 is the size and 5 is the data 


// vector<int> number(10, 5);

vector<int>number = {4,5,6,3,5,3,5,3};

vector<int> number3(number.begin() , number.end());

for(int i=0; i < number3.size(); i++){

   cout<<number3[i] <<endl;
}














// int vlaue ;



// for(int i =0; i <3; i++){


//    cout << "Enter a value : ";

//    cin >> vlaue;

//    number.push_back(vlaue);
// }

// cout<<number[2];






//question  : = Create a vector of size 10 which can store boolean value and populate this vecotr with all 0s



vector<bool> arr4(10 , false);

for(int i=0; i < arr4.size(); i++){


   cout <<arr4[i];
}













// #include <iostream>
// #include <vector>

// int main() {

//     std::vector<bool> vec(10, false); // Create a vector of size 10 with all elements set to false (0)

//     // Print the vector
//     for (bool val : vec) {
//         std::cout << val << " ";
//     }

//     return 0;
// }








}