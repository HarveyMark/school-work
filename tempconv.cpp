// This program takes celsius and outputs farenheit
//Antonio Perez, Harvey Mark, Ian Winnie
// lab 4b (conversion, tips, and temp)

// iTSE 1329-002
// programmed on Feb 17th, 2015
#include <iostream>
using namespace std;
int main()
{
	double celsius;
	double fahrenheit;

   cout << "Harvey Mark - Lab 4b - Conversions" << endl;
   cout << "Please enter degrees in Celsius = " << endl;
   cin >> celsius;
  
	fahrenheit = 1.8 * celsius + 32;

   cout << "Degrees Fahrenheit = " << fahrenheit << endl;



   return 0;
}

