/*


//  q) create a vector of size 10 which can store boolean values and 

// populate this vector with all  0s

 

#include<iostream>

#include<vector>
using namespace std;

 int main(){
  

 vector<bool> arr(10 , false);

   for(int i=0; i < arr.size() ; i++){
   
    cout<<"populate vector value : " <<arr[i] <<endl;
   }
 }



// how to access eleemnts of  the vector 









*/


#include<iostream>
#include<vector>
using namespace std;

int main(){

vector<int> arr={3,5,2,5,54,5};

int arr1[] = {3,4,5,5};
//how to access these  value 


cout<<"Element  at index 0 : is :"<<arr[10] <<endl;

cout << "First elemnt direct call : " << *arr.begin()<<endl;
cout << "First elemnt direct call : " << arr.front()<<endl;

cout << "Last elemnt direct call : " <<arr.back()<<endl;

cout<<"this is without using the vector: " <<arr1[9] <<endl;







cout<<"Element  at index 0 : is :"<<arr.at(10) <<endl;








}