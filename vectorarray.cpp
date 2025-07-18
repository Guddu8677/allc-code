/*
  array of vector 

and nesting of vector 



// Declaration of  the array of vector 
vector<int> v[5];

*/

#include<iostream>
#include<utility>
#include<vector>
#include<algorithm>

using namespace std;

int  main(){

 // this make a 4 vector 
 vector<int> arrOfVecoter[4];
//   arrOfVecoter[0].push_back(5);
//   arrOfVecoter[0].push_back(6);
//   arrOfVecoter[0].push_back(53);
//   arrOfVecoter[1].push_back(543);
//   arrOfVecoter[2].push_back(535);
//   arrOfVecoter[2].push_back(566);
//   arrOfVecoter[2].push_back(65);
//   arrOfVecoter[3].push_back(45);

//  for(int i =0; i < 4; i++){
    
//     for(int j =0; j < arrOfVecoter[i].size(); j++){


//         cout <<arrOfVecoter[i][j] <<" ";
//     }

//     cout <<endl;
//  }






//Now take the user input 






// for(int i=0; i <4; i++){

//   int n;

//   cout <<"Enter the  Size of vector value : "<<i + 1 <<" : ";

//   cin >> n;  


// for(int j =0; j < n; j++){


//   int a;
//   cin>> a;

//   arrOfVecoter[i].push_back(a);

// }

// }

// for(int i =0; i <3; i++){


//   for(int j=0; j<arrOfVecoter[i].size(); j++){


//     cout<<arrOfVecoter[i][j] << " ";
//   }

//   cout <<endl;
// }
 












// Now 2D vector 
 // Declaration of 2D vector in c++ 


vector<vector<int>> v;


v.push_back({132,5});
v.push_back({132});
v.push_back({13,5,-4,90});
 

for(int i =0; v.size(); i++){

 
  for(auto it=v[i].begin(); it != v[i].end(); it++){
 
  cout << *it  <<" ";

}

cout << endl;
}


vector<vector<int>>::iterator it;

   it= v.begin();
   v.insert(it+1,{5,3,5,3});
   v.pop_back();
   cout<<"After the pop back : "<<endl;
   for(int i =0; i < v.size(); i++){
 
      for(auto it= v[i].begin(); it != v[i].end(); i++){

      cout <<*it << " ";

   }
   

   cout << endl;
}

}