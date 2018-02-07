//Author:
#include<iostream>

using namespace std;

int main()
{

  cout<<"What character do you want to know about?\n";

  //when user's entry is between A-Z...
  cout<<" is an upper case letter!\n";

  //when user's entry is between a-z...
  cout<<" is a lower case letter!\n";

  //in all other cases...
  cout<<"?! Pssh. What are you talking about?\n";
  
  //no matter what they enter...
  cout<<"The ASCII value is: ";

  return 0;
}
