//Author:
#include <iostream>

using namespace std;

int main()
{
  int guess;

  cout<<"Guess a number between 1-10: ";
  cin>>guess;


  //when they guess correctly (7), display:
  
  
  if(guess==7) { cout<<" yes! Lucky Number 7!\n";}
  

  //when they guess just off by one (either 6 or 8), display:
  

  else if(guess==6||guess==8)
   { cout<< " oh, so close!\n";}
   else
   { cout<<" Waaay off, sorry.\n";}
  //when they guess any other number, display:
  
  

  return 0;
}
