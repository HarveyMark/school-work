// Harvey Mark, Ian Winnie, Antonio Perez
//This program thakes a total number of pennies, nickles, dimes, and quarters
// and outputs their total worth
// Programmed by Hrarvey Mark
#include <iostream>

using namespace std;

int main() {
	double pennyWorth = 0.01;
	double nickelWorth = 0.05;
	double dimeWorth = 0.10;
	double quarterWorth = 0.25;
	double numPenny;
	double numNickel;
	double numDime;
	double numQuarter;
	double amountTotal;
	
	// code that asks for user input
	cout << "Please enter the number of pennies, nickels, dimes, and quarters." << endl;
	cout << "Number of pennies: " << endl;
	cin >> numPenny;
	
	cout << "Number of nickels: " << endl;
	cin >> numNickel;
	
	cout << "Number of dimes: " << endl;
	cin >> numDime;
	
	cout << "Number of quarters: " << endl;
	cin >> numQuarter;
 

 	// computer calculation to get the tota amount
	amountTotal = (pennyWorth * numPenny) + (nickelWorth * numNickel) + (dimeWorth * numDime) + (quarterWorth * numQuarter);
	cout << "Your total = $" << amountTotal << endl;


}
