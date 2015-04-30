#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
		
   int number; 	
   int userNumber;	
   string keepGoing;  

   
   srand((unsigned)time(NULL)); 
   number = (rand() % 10) + 1; 
   	
  
   cout << "Do you want to guess a number? Enter y or n: " << endl;
   cin >> keepGoing;

while(keepGoing == "y")
{
      
    cout << "Try to guess by entering a number between 1 and 10: ";
    cin >> userNumber; 
     
  if(userNumber > number)
	{
	cout << "\nLower!" << endl;
	}
	else
	{
	cout << "\nHigher!" << endl;
	}

  if(userNumber == number)
  {
    keepGoing = "n"; 
    cout << "You are a genius. That's correct!\n";
  }
  else
      {
        cout << "Try again!" << endl;
      }
if(userNumber >= 11)
  {
    cout << "Too high!" << endl;
  }

  if(userNumber <= -1)
  {
    cout << "Too low!" << endl;
  } 

}
      
  
    return 0;
} 