/*

pair in cpp 

it is set of two value and two elements 


DECLARATION OD PAIR 

pair <datatype1 , datatype2> pair name 

pair <int , string > pair name 
now how to access both  
pairname.first 
pairname.second  

*/


#include<iostream>
#include<utility>

using namespace std;


int main(){


    pair<int , float> p(23 , 45.23);

    cout << p.first <<endl;

    cout << p.second<<endl;

    // using the function also cna access the value 

    pair<int , string> p2;
    p2 = make_pair(12 , "guddu kumar das ");


   
    auto p3 = make_pair("i love this circle " , 141);

  // also declare with same value like this 
    pair<int , float> p4(p);
    cout << p4.first <<" " <<p4.second<<endl;



    cout<<p2.first <<" " <<p2.second << endl;
    cout<<p3.first <<" " <<p3.second<<endl;



    // now use the swap fnction 

   pair<int , float> gu(4,  6.77);
   pair<int , float> gu1 (54,435.54);

    cout<<gu.first <<" " << gu.second <<endl;

    cout<<gu1.first <<" " << gu1.second<<endl;







    
}