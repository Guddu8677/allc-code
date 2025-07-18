#include<iostream>
#include<vector>

#include<algorithm>
using namespace std;

int main(){


   vector<int> arr= {33,34,5,35,6,4, 35};

    // for(int i = 0; i<7; i++){
    //     for(int j=i+1;j<7;j++){
    //         if(arr[i]==arr[j]){
    //             cout<<arr[j]<<" ";
    //         }
    //     }
        
    // }
      

   sort(arr.begin(), arr.end());
   for(int k=0; k < arr.size(); k++){
      cout<<arr[k] <<" " <<endl;;

   }



    for(int i=1;i<7;i++){
        if(arr[i-1]==arr[i]){
            cout<<arr[i]<<" ";
        }
    }
  

 
}