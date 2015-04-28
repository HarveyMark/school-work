// MichiganCities.cpp - This program prints a message for valid cities in Michigan.  
// Input:  Interactive
// Output:  Error message or nothing

#include <iostream>
#include <string>
using namespace std;

int main() 
{
   // Declare variables
   string inCity;	  // name of city to look up in array
   const int NUM_CITIES = 10;
   // Initialized array of cities
   string citiesInMichigan[] = {"Acme", "Albion", "Detroit", "Watervliet", "Coloma", "Saginaw", "Richland", "Glenn", "Midland", "Brooklyn"}; 
   bool foundIt = false;  // Flag variable
   int i;   		  // Loop control variable
   
   
   // Get user input
   cout << "Enter name of city: ";
   cin >> inCity; 
	
   	
   // Looks through array for user input data
    for(i = 0; i <= NUM_CITIES; i++)
    {
      if(inCity == citiesInMichigan[i])
      {
         foundIt = true;
      }
    }


    if(foundIt == true)
    {
      cout << "That's city in Michigan!" << endl;
    }
    else
    {
      cout << " That's not a city in Michigan :(" << endl;
    }

	 cout << "Harvey Mark, lab 12, MichiganCities.cpp\n";
   return 0;	

} 

