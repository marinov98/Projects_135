// Write a better version of the calculator, calc2.cpp, that can evaluate multiple arithmetic
// expressions. Let’s use the semicolon symbol that must be used at the end of each expression in the
// input.

// Assuming that the input file formulas.txt looks as follows:

// 15 ;
// 10 + 3 + 0 + 25 ;
// 5 + 6 - 7 - 8 + 9 + 10 - 11 ;
// When we run the program with that input, the output should evaluate all of the expressions and
// print them each on its own line:
//
//$ ./calc2 < formulas.txt
// 15
// 38
// 4

#include <iostream>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main() {
	int numbers;
	char symbols;
	int total = 0; // initialize the total
	cin >> total;  // first number stored in the total
	while (
	    cin >> symbols
	    >> numbers) // loops through the text stores the numbers as ints and operators as characters
	{
		if (symbols == '+') // if there is a plus sign the next number are added to the sum
		{
			total += numbers;
		}
		else if (symbols == '-') // if there is a minus sign then the next number is subtracted from
		                         // the sum;
		{
			total -= numbers;
		}
		else if (symbols
		         == ';') // if there is a semicolon then the program  prints the sum of that line
		{
			cout << total << endl;
			total = numbers; // resets the sum to loop through the next line and store the new
			                 // numbers in it which are then added or subtracted based on the
			                 // operator next to them
		}
	}
	cout << total << endl; // prints out the sum in the last line
}
