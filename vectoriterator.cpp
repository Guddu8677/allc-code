/*


in cpp vector iterator 


iterator used to iterat the value as a pointer use the * to   
on the google chek the iterator function some like end , begin , cbegin, .....
declaration of the iterator 

vector<datatype> name;
vector<datatype>::iterator name;








*/


#include<iostream>
#include<vector>

#include<algorithm>

using namespace std;

 int main(){


    vector<int> v= {3,5,5,3,53,5};
 

    // NOW FOR THGE REVERSE OPERATOR


    // vector<int>::reverse_iterator rit;

    // for(rit=v.rbegin(); rit != v.rend(); rit++){

      

    //     cout<<*rit <<" ";
    // }





    




    // THIS IS FOR THE BEGIN AND END OF THE OPERATOR 


    // vector<int>::iterator it;

    // for(it=v.begin() + 1; it != v.end(); it++){

    //   // we can also use from increasing point like +1 or +2

    //     cout<<*it <<" ";
    // }




//SORTIONG IN THE ASSENDING ORDER

// sort(v.begin(), v.end());

// for(int i =0; i < v.size(); i++){


//     cout<<v[i] << " ";
// }
 


//  cout << endl;

// //SORTING IN THE DECENDING ORDER 

//  sort(v.begin(), v.end() , greater<int>());

//  for(int i=0; i < v.size(); i++){

//     cout<< v[i] <<" ";
//  }







 // ERASE THE EVEN POSITION NUMBER 


 vector<int> val={4,3,56,4,6,45,65};

 vector<int> :: iterator it;

 for( it = val.begin(); it != val.end();){

    if(*it % 2 == 0){


        val.erase(it);
    }

    else{

         ++it;
    }

    
 }

 cout << "after erasing the value of vector : " ;


 for(int i=0; i < val.size() ; i++){


    cout<< val[i] << " ";
 }


 }