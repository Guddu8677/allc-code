/*

start the  loops in c++


why we need loop 

same thing repetad again and again



iteration 
repetation 







*/


#include<iostream>
using namespace std;

int main(){


    

// thats  reson we are using the loop


    for(int i =0 ; i < 5; i++){

        cout << "Hello world " <<endl;
    }
    


/*
way to use the loop 

initialization 

condition / termination  condition 

update 



# Range for loop 



entry control  := first check the condition and then  go insisde the loop 


exit control := first go inside the loop then chek the condition 



how many types of loop 

1) for loop 

2) while loop 

3) do- while loop 

4) Range based loop 



*/


int i; //INITIALIZATION 
for(i =0 ; i <=10; i++){

    cout<<"form 1 to 10" <<i <<endl;
}





// properties of for loop 



int j;

for(i=1, j=1; i <= 5; ++i , j++){

cout<<"two initialization : " << i <<" " <<j <<endl;

}



  




// wap to calculate sum of odd integer from 1 to 15 using for loop 



int  sum =0;
int n ;
cout <<"Enter n number :";
cin>>n;

for(int i =0 ; i < n; i++){

 if(i % 2 != 0){

    sum = sum +i;


 }

 
}

cout<<"sum := " <<sum <<endl;











// now sum of the even integer value 

int m ;

int sum1 = 0;

cout << "Enter the  m  number : ";

cin >> m;

for(int i =0; i < m ; i++){


    if(i % 2 == 0){


        sum1 = sum1 + i;
    }
}


cout << "even sum is: "<<sum1 <<endl;






// sum of n number 


int sum2 = 0; 

int k ;

cout << "Enter a number : ";

cin >> k;

for(int i = 0; i <= k; i++){


    sum2 = sum2 + i;
}

cout <<"sum is  " <<sum2 << endl;





}