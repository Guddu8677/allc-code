/*

2D array in c++ 
 
initialization of  2-D array 


datatype name [size of 1] [size of 2]
 

*/


// #include<iostream>

// using namespace std;

// int main(){



//     int arr[3][2];
 
//     cout << "size of the array :" <<sizeof(arr)<<"bytes"<<endl;

//  cout <<"Array element for i and j:";
//  for(int i =0; i <3; i++){


//     for(int j=0; j<2; j++){


//         cin>>arr[i][j];
//     }
//  }


// cout<<"array i and j is : ";
//  for(int i =0; i < 3; i++){


//     for(int j=0; j<2; j++){


//         cout<<arr[i][j]<<" ";
//     }
//  }









// Address of array element in 1D array 


// formula to calculate the address of D array 

// B + S *(i - l.b)  base + sizeof data tpye *index - lowerbound 


/*

int a[5] = {10,0,-,1,5};
 

 lower bound take by default =0
&a = 100 this is the base address 

index wise  &0 = 100 , &1 = 104 .....like that 

so find the a[3]= 5;

100 + 4 *(3-0) = 100 + 12 = 112 is the address of the a[3]


*/


//2Darray memorey representation and accessing array elements 




    // 1) Row major  

    // 2) Column major 


    //formula  by Row major 
  // where n = column  and m = Row  , j which position to find that vlaue 


    // B + [i * n +j]*size




//fomula by  column major 

//B + [j * m +i]*size


//}






// 2D Array for the O(n)  complexity 



// #include<iostream>

// using  namespace std;

// int main (){



//      int matrix[2][3];

//      int * ptr = &matrix[0][0];   // pointer to the  first elements 

//      int  total = 2*3;

//       cout << "Enter the elements : \n";

//        for(int i =0; i < total; i++){


//         cin >> *(ptr + i);


//        }



//         cout << "\n Matrix is :" ;

//         for(int i=0; i < total;  i++){


//             cout << *(ptr+i) <<" ";

//             if((i + 1) % 3 == 0)

//             cout << endl;
//         }


//         return 0;
// }







// dynamicaly allocate the memorey to  the array 




#include <iostream>
using namespace std ;

 int main(){


    int row , cols ;

     cout << "number of the row : " ;
     cin >> row ;

      cout << "number of cols : ";

      cin >> cols; 

      int total = row * cols;



      int * matrix = new int[total];


       cout<<"\n Enter the matrix element : ";

    for(int i =0; i < total; i++){


        cin >> *(matrix+i);
    } 


    for(int i =0; i < total; i++){


        cout << *(matrix + i ) << " ";
    }

   

    delete[]  matrix;
     return 0; 

 }