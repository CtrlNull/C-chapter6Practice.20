// This program calculates the charges for DVD rentals. Every Third DVD is Free

#include "stdafx.h"
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	int dvdCount = 1;		// DVD counter
	int numDVDs;			// Number of DVDs rented
	double total = 0.0;		// Accumulator
	char current;			// Current release, Y or N

	// Get the number of DVD's
	cout << "How many DVD's are being rented? ";
	cin >> numDVDs;

	do
	{
		if ((dvdCount % 3) == 0)
		{
			cout << "DVD #" << dvdCount << " is free!\n";
			continue;	// Immediately start the next iteration
		}
		cout << "Is DVD #" << dvdCount;
		cout << " a current release? (Y/N) ";
		cin >> current;
		// If the current 
		if (current == 'Y' || current == 'y')
			total += 3.50;
		else
			total += 2.50;
	} while (dvdCount++ < numDVDs);

	// Display the total
	cout << fixed << showpoint << setprecision(2);
	cout << "The total is $" << total << endl;
	return 0;
}