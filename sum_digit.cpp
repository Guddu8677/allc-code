#include<iostream>
using namespace std ;


int main(){


int n ;

int sum = 0;



 cout << "Enter a number : ";

 cin >> n;


while (n > 0)
{
    


    int last_digit = n % 10;
     std::cout << "Modulus: " << last_digit << " ";

    sum = sum + last_digit;
    std::cout << "Division: " << n << '\n';
    n = n/10;
}

  cout << sum;



    return 0;


}