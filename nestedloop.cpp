/*

nested loop in c++






*/


#include<iostream>
using namespace std;

 int main(){



    // for(int i =0; i < 10;  i++){



    //     for(int k =1; k <= 6; k++){


    //    cout << "hello this is nested loop" <<endl;


    //     } 
        
        
        
    //        }
             

            






        
        for(int i =1; i <5; i++){


            for(int j =1; j <=4; j++){


                cout << "*" <<" ";
            }

            cout << endl;
        }





  cout <<endl;


    for (int i = 0; i < 4; i++) {
        cout << " ";  // Print leading space for alignment

        if (i == 0 || i == 3) {
            cout << "*";  // Print 1 star in the first and fourth lines
        } else {
            cout << "***";  // Print 3 stars in the second and third lines
        }

        cout << endl;
    }



cout << endl;












    int pattern[] = {1, 3, 3, 1}; // Array defining the number of stars in each row

    for (int i = 0; i < 4; i++) {
        // Print leading spaces for centering the pattern
        cout << " ";
        for (int j = 0; j < pattern[i]; j++) {
            cout << "*";
        }
        cout << endl;
    }

 






  // wap to calculate sum of product of all  pair of  array  of element 


  // int data[] = {10 ,1 ,3 , -4 ,7 ,5};   (10,1) ,(10 ,3) ,(10 ,-4) this is called pair 


int data[] = {10 ,1 ,3 , -4 ,7 ,5};

 int total = 0;

for(int i = 0; i <= 6; i++){


   for(int j= i + 1; j<= 6; j++){

   total  +=  data[i] * data[j];

   }

    
}

cout << "total pair product is : "<<total <<endl;







}























 