// Airline.cpp - This program determines if an airline passenger is 
// eligible for a 25% discount. 
// Harvey Mark, ITSE 1329#include <iostream>
#include <string>
using namespace std;
int main() 
{
   string passengerFirstName = ""; // Passenger's first name
   string passengerLastName = "";  // Passenger's last name
   int passengerAge = 0; 	   // Passenger's age

   // This is the work done in the housekeeping() function
   cout << "Enter passenger's first name: ";
   cin >> passengerFirstName;
   cout << "Enter passenger's last name: ";
   cin >> passengerLastName;
   cout << "Enter passenger's age: ";
   cin >> passengerAge;
	
   // This is the work done in the detailLoop() function 	
   // Test to see if this customer is eligible for a 25% discount
	if(passengerAge <= 6)
   {
      cout << "You are eligable for a discount!\n";
   }
   if(passengerAge >= 65)
      {
      cout << "You are eligable for a discount!\n";
      }
   if(passengerAge >= 7 && passengerAge <= 64)
   {
      cout << "You are not eligable for any discounts.\n";
   }
   // This is the work done in the endOfJob() function
   return 0;
} 

