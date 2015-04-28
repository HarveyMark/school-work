// This program calculates the cost of petrol in England using US dollars
//Programed on Feb 10, 2015
#include <iostream>
using namespace std;
int main()
{
   double liter =  0.264179;
   double literPerGallon = 4.545;
   double pencePerLiter = 129;       // a pence is like a penny in the US
   double UK2US = .634240;
   double tankSize = 16;            // this is a GB gallon 
   double litersPerTank;
   double pencePerTank;
   double UKPPerTank;               // Pound sterling is the English dollar pound =100 pence
   double USDPerTank;
   double tankSizeLiters;

   cout << "Harvey Mark - Lab 4 - FuelDeal" << endl;

   //this will convert gallons to liters 
   tankSizeLiters = tankSize * literPerGallon;
   cout << "Tank size in liters: " << tankSizeLiters << endl;
   

   // Calculate the liters per tank here
   litersPerTank = tankSizeLiters / liter;

   cout << "Liters per Tank: " << litersPerTank << endl;
   // Calculate the pence per tank here
   pencePerTank = tankSizeLiters * pencePerLiter;

   cout << "Pence per Tank: " << pencePerTank << endl;
   // Calculate the Pound Sterling per tank here
   
   UKPPerTank = pencePerTank / 100;
   cout << "Pound Sterling per Tank: " << UKPPerTank << endl;
   // Convert to US Dollars here
   
   USDPerTank = UKPPerTank * UK2US;
   cout << "The cost of a tank of petro in the UK expressed in dollars is: "
	    << USDPerTank << endl;

   return 0;
}

