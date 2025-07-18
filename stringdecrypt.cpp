/*

coding problem solving 

decrypt the string 


*/

#include<iostream>
#include<string>

using namespace std;

int main(){




    string alphabet  = {"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"};

    string key = {"ZYXWVUTSRQPONMLKJIHGFEDCBAzyxwvutsrqponmlkjihgfedcba"};

    string msg { };
    string encrypting_msg {};

    string decrypted_msg {};

    cout << "Enter the message :";

    getline(cin , msg);

    cout << "\n Encrypting messsage : .. "<<endl;

    for(char c : msg){

        size_t possition = alphabet.find(c);

        if(possition != string::npos){


            char new_c = key.at(possition);


            encrypting_msg += new_c;


        }

        else{

            
            encrypting_msg += c;

        }
    }

    cout << "Encrypted message is the : "<<encrypting_msg <<endl;

    cout<<"Decrypted message ... "<<endl;

    for(char c:encrypting_msg){
          

        size_t possition = key.find(c);
        if(possition  != string ::npos){

            char new_c = alphabet.at(possition);

            decrypted_msg += new_c;


        }

        else{

            decrypted_msg += c;
        }
    }


    cout << "Again decrypte the message is the n: " <<decrypted_msg <<endl;
}