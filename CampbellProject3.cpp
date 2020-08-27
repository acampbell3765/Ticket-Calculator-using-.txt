//Header files
#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;

//main function begins
int main()
{
	//declare variables
	int price250, price100, price50, price25;
	int numBoxTickets, numSidelineTickets;
	int numPremiumTickets, numGeneralTickets;
	double totalTickets, totalAmount;

	//create the input's objects
	ifstream inputFile;

	//read the file
	inputFile.open("Ch3_Ex5Data.txt");
	ofstream outfile("Ch3_Ex5Out.txt");
	inputFile >> price250 >> numBoxTickets
		>> price100 >> numSidelineTickets
		>> price50 >> numPremiumTickets
		>> price25 >> numGeneralTickets;
	//calculate total amount of tickets 
	//calculate sale amount
	totalTickets = (numBoxTickets + numSidelineTickets + numPremiumTickets + numGeneralTickets);

	totalAmount = (numBoxTickets * 250
		+ numSidelineTickets * 100 + numPremiumTickets * 50
		+ numGeneralTickets * 25);

	//display output using two decimals and save results into output file
	
	//close input file
	inputFile.close();
	outfile << "Total Sale Amount: " << fixed << setprecision(2) << totalAmount << endl;
	outfile << "Total Number of tickets sold: " << fixed << setprecision(2) << totalTickets << endl;
	outfile.close();
	cout << "See output file: Ch3_Ex5Out.txt for the results." << endl;
	return 0;
}

