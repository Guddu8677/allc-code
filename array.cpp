#include<iostream>

using namespace std ; 

int main(){




// int arr[100] = {2 ,4,2,-3,56,3};


//   for(int i =0; i < 6; i++){

  
//   if(arr[i]  <  0 ){



//     cout <<" print " <<arr[i] << " " ;

//   }
//   }

//   for(int i=0; i < 6 ; i++){

//  if(arr[i] > 0){

//     cout << arr[i] <<" ";
//  }
    
  
 

//   }

// return 0;




int arr[5] = {3,6,5,6,6};

for(int i=0; i <=5; i++){


  cout <<"arr["  << i<< "]" <<" " <<arr[i] <<" ";

  cout << "Address : " <<&arr[i] <<endl;



cout << *(arr + 2);     // You're accessing the 3rd element of the array (index 2), which is:clear
}









}