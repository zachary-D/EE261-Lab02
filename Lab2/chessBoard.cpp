//******************************************************************
// Chessboard program
// This program prints a chessboard pattern that is built up from
// basic strings of white and black characters.
//******************************************************************
#include <iostream>
#include <string>

using namespace std;


const string BLACK = "$$$$$$$$";  // Define a line of a black square
const string EDGE = "$      $";		//Define a middle of a filled square
const string WHITE = "        ";  // Define a line of a white square

int main()
{
	string whiteRow;            // A row beginning with a white square
	string blackRow;            // A row beginning with a black square

								// Create a white-black row by concatenating the basic strings
	whiteRow = WHITE + BLACK + WHITE + BLACK +
		WHITE + BLACK + WHITE + BLACK;
	string whiteRow_mid = WHITE + EDGE + WHITE + EDGE +	//A row begging with a white square that composes the middle of a square
		WHITE + EDGE + WHITE + EDGE;


	// Create a black-white row by concatenating the basic strings
	blackRow = BLACK + WHITE + BLACK + WHITE +
		BLACK + WHITE + BLACK + WHITE;
	string blackRow_mid = EDGE + WHITE + EDGE + WHITE +
		EDGE + WHITE + EDGE + WHITE;

	// Print five white-black rows 
	cout << whiteRow << endl;
	cout << whiteRow_mid << endl;
	cout << whiteRow_mid << endl; 
	cout << whiteRow_mid << endl;
	cout << whiteRow_mid << endl;
	cout << whiteRow_mid << endl;
	cout << whiteRow_mid << endl;
	cout << whiteRow << endl;

	// Print five black-white rows
	cout << blackRow << endl;
	cout << blackRow_mid << endl;
	cout << blackRow_mid << endl;
	cout << blackRow_mid << endl;
	cout << blackRow_mid << endl;
	cout << blackRow_mid << endl;
	cout << blackRow_mid << endl;
	cout << blackRow << endl;

	// Print five white-black rows 
	cout << whiteRow << endl;
	cout << whiteRow_mid << endl;
	cout << whiteRow_mid << endl;
	cout << whiteRow_mid << endl;
	cout << whiteRow_mid << endl;
	cout << whiteRow_mid << endl;
	cout << whiteRow_mid << endl;
	cout << whiteRow << endl;

	// Print five black-white rows
	cout << blackRow << endl;
	cout << blackRow_mid << endl;
	cout << blackRow_mid << endl;
	cout << blackRow_mid << endl;
	cout << blackRow_mid << endl;
	cout << blackRow_mid << endl;
	cout << blackRow_mid << endl;
	cout << blackRow << endl;

	// Print five white-black rows 
	cout << whiteRow << endl;
	cout << whiteRow_mid << endl;
	cout << whiteRow_mid << endl;
	cout << whiteRow_mid << endl;
	cout << whiteRow_mid << endl;
	cout << whiteRow_mid << endl;
	cout << whiteRow_mid << endl;
	cout << whiteRow << endl;

	// Print five black-white rows
	cout << blackRow << endl;
	cout << blackRow_mid << endl;
	cout << blackRow_mid << endl;
	cout << blackRow_mid << endl;
	cout << blackRow_mid << endl;
	cout << blackRow_mid << endl;
	cout << blackRow_mid << endl;
	cout << blackRow << endl;

	// Print five white-black rows 
	cout << whiteRow << endl;
	cout << whiteRow_mid << endl;
	cout << whiteRow_mid << endl;
	cout << whiteRow_mid << endl;
	cout << whiteRow_mid << endl;
	cout << whiteRow_mid << endl;
	cout << whiteRow_mid << endl;
	cout << whiteRow << endl;

	// Print five black-white rows
	cout << blackRow << endl;
	cout << blackRow_mid << endl;
	cout << blackRow_mid << endl;
	cout << blackRow_mid << endl;
	cout << blackRow_mid << endl;
	cout << blackRow_mid << endl;
	cout << blackRow_mid << endl;
	cout << blackRow << endl;
	cin.ignore();
	return 0;
}


