//program that calculates the before tax pay
#include <iostream>
using namespace std;

//main function
int main() {
	//declarations
	double payRate;
	double hoursWorked;
	double btPay;

	//get info from user
	cout << "Please enter pay rate.";
	cin >> payRate;
	cout << "Please enter the hours worked for the week.";
	cin >> hoursWorked;

	//calculations
	btPay = payRate * hoursWorked;

	//report calcs
	cout << "Your before tax pay is: " << btPay << ".\n";
	cout << "Press any key to exit.";

	getchar();
	getchar();
	return 0;


}