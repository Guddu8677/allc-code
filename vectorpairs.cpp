/*
Here we use the vector and pair 

vector<int> number;


Delaration of vector and pair in cpp 

vector<pair<int , string>> studentDetail;



*/


#include<iostream>
#include<vector>
#include<utility>

using namespace std;

int main(){


    vector<pair<int , string>> student={{1 , "Guddu kumar das"}, {2 , "sunny"}};

    for(int i =0; i < student.size(); i++){

        cout<<student[i].first <<" " << student[i].second <<endl ;
    }



    student.push_back({3, "aadarsh"});

    for(int i =0; i < student.size() ; i++){

        cout << student[i].first <<" " <<student[i].second<<endl;
    }




    // sum of two element using the vector pair 

    vector<pair<int, int>> v = {{2,5} , {3,6}, {3,6}};
    int sum=0;

    for(int i=0; i < v.size(); i++){
        // it give the sum of second element 
        sum = sum+ v[i].second;
    }
  
    cout << sum << " ";
}