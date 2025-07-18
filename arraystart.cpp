/*

Array in c++ 






*/

#include<iostream>

using namespace std;
 
 int main(){



    int a =8; 

    int roll_no[a];

    while(a++<= 12){

        cout <<"The size of the array increment : " <<a <<endl;



    }





       //extern int a[];  // this is Declaration  := it just tell the type there no memorey allocation 

        // int b[];  // this is Definition  := this is the memorey allocation 


    // int b[] = {4,5,3,5} // here it not give the because it automatically give the size of the array 






// memorey representaion 

// how to take user input array and how to access the array  and also how to decorate the array 






// int roll[5];

// cout << "Enter the array element : ";

// for(int i=0; i <5; i++){

//     cin>>roll[i];





// }

// cout << "this is the array : ";

// for(int i = 0; i <5; i++){



//    cout<<roll[i] <<" "; 
// }








//Exercise on array and also on leet code problem 


/*

1)Declare an array of  15 integers and initialize the array so  that all array element are zero then assing  10 to the first element  and 150 to 
the last element 



2) 
wap to  read 2 array each of size 5 and store the sum of these 2 array into third array 

3)  Teo sum problem 


*/


// int arr[15] = {0};

// arr[0] = 10;

// arr[14] = 150;

// for(int i=0; i <= 15; i++){


//     cout <<"assing the value to array : "<<arr[i] <<endl;
// }




// second  problem sum  of two arrray sore in the third array 


// int arr1[4] , arr2[4] , arr3[4];

// cout <<"ENter first array element: ";
// for(int i=0; i <=4 ; i++){


//     cin>> arr1[i];
// }

// cout << "Entrer second array element : ";

// for(int i=0; i<= 4; i++){


//     cin>> arr2[i];
// }

// for(int i=0; i <=4; i++){


//     arr3[i] = arr1[i] + arr2[i];

//     cout <<arr3[i] <<" ";
// }










//two sum problem 


int target ;
int nums[5];

cout <<"Enter the array element : ";

for(int i=0; i <5; i++){

    cin>>nums[i];
}

cout << "Enter the target number : ";

cin >>target;

for(int i=0; i <5; i++){


    for(int j=i + 1; j<5; j++){



    if(nums[i] + nums[j] == target){



        cout << nums[i] << " " <<nums[j]<<endl;
    }

 


    }

  

   
}







// Given a non-empty array of integers nums every elemnt appears  twice except for one find that single one 





int num[5] ;

int ans =0 ;

cout << "Enter array element : ";

for(int i=0; i < 5; i++){


    cin >>num[i];
}


for(int i=0; i < 5; i++){


    ans = ans ^ num[i];
}

cout << "this is the unique  value : "<<ans;






        




 }