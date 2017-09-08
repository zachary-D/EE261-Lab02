//******************************************************************
// Chessboard program
// This program prints a chessboard pattern that is built up from
// basic strings of white and black characters.
//******************************************************************
#include <iostream>
#include <string>

using namespace std;


const string BLACK = "$$$$$$$$";	//The top and bottom of a black square
const string EDGE = "$      $";		//The middle sections of a black square
const string WHITE = "        ";	//A blank space

const string whiteLine = WHITE + BLACK + WHITE + BLACK + WHITE + BLACK + WHITE + BLACK;	//The top or bottom line for a row starting with a white square
const string whiteLine_mid = WHITE + EDGE + WHITE + EDGE + WHITE + EDGE + WHITE + EDGE; //The middle lines for a row starting with a white square
const string blackLine = BLACK + WHITE + BLACK + WHITE + BLACK + WHITE + BLACK + WHITE;	//The top or bottom line for a row starting with a black square
const string blackLine_mid = EDGE + WHITE + EDGE + WHITE + EDGE + WHITE + EDGE + WHITE;	//The middle lines for a row stargin with a black square

void drawWhiteRow()		//Draws a row starting with a white square
{
	cout << whiteLine << endl;
	for (int i = 0; i < 6; i++)
	{
		cout << whiteLine_mid << endl;
	}
	cout << whiteLine << endl;
}

void drawBlackRow()		//Draws a row starting with a black square
{
	cout << blackLine << endl;
	for (int i = 0; i < 6; i++)
	{
		cout << blackLine_mid << endl;
	}
	cout << blackLine << endl;
}

int main()
{
	for (int i = 0; i < 4; i++)		//Loops to draw the chessboard in pairs of rows
	{
		drawWhiteRow();
		drawBlackRow();
	}

	std::getline(cin, string());
	return 0;
}


