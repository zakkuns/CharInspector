//Author: Zakary Kuns
#include<iostream>

using namespace std;

int main()
{
        char letter;

        cout<<"What character do you want to know about?\n";

        cin >> letter;

        if (letter >= 'A' && letter <= 'Z') { 
                 //when user's entry is between A-Z..
                cout<< letter << " is an upper case letter!\n";
        }



       else  if (letter >= 'a' && letter <= 'z') {
                //when user's entry is between a-z...
                cout<< letter << " is a lower case letter!\n";

        }

        else {

        //in all other cases...
        cout<<"$?! Pssh. What are you talking about?\n";
        
        }



        //no matter what they enter...
        cout<<"The ASCII value is: " << (int)letter << std::endl;

        return 0;
}
