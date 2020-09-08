// ****************
// Kamrin Chizek
// Lab 2 
// Creating My Weekly Schedule and Star Pattern
// ****************

#include <iostream>
#include <string>

void StarPattern();

using namespace std;

int main()

{
	//Setting my weekdays and spaces as Day(n)

	const string Day1 = "Monday		";
	const string Day2 = "Tuesday    	";
	const string Day3 = "Wednesday       ";
	const string Day4 = "Thursday        ";

	//Setting classtimes and spaces as a shorter version

	const string Calc = "11am       Calculus II";
	const string Eng = "9am        Engineering Problems";
	const string C1 = "1:30pm     C++";
	const string C2 = "1pm        C++";
	const string Physics = "2pm        Classical Physics";

	//calling those constants

	cout << Day1 << Calc << endl;
	cout << Day1 << C1 << endl;
	cout << Day2 << Eng << endl;
	cout << Day2 << C2 << endl;
	cout << Day3 << Calc << endl;
	cout << Day3 << Physics << endl;
	cout << Day4 << Physics << endl;
	cout << endl << endl << endl;
	
	StarPattern();
	
	return 0;

}

void StarPattern()

{

	const string Star1 = "   *   *   *   *";
	const string Star2 = " *   *   *   *";

	cout << Star1 << endl;
	cout << Star2 << endl;
	cout << Star1 << endl;
	cout << Star2 << endl;
	cout << Star1 << endl;
	cout << Star2 << endl;
	cout << Star1 << endl;
	cout << Star2 << endl;

}