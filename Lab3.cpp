#include <iostream>
#include <iomanip>


using namespace std;

int main()
{
	const float BASIC_WORKING_TIME = 40;
	const float OVERTIME_RATE = 1.5;
	float hoursWorked = 0;
	float hourlyRate = 0;
	float overWorkigTime = 0;

	float regularPay = 0;
	float overtimePay = 0;
	float totalPay = 0;

	cout << "================= Pay Calculator =================" << endl;
	cout << "Type how many hours you worked in the week : ";
	cin >> hoursWorked;
	cout << "Type your hourly rate : ";
	cin >> hourlyRate;
	cout << endl;


	// if input data is valid.
	if (hoursWorked > 0 && hourlyRate > 0)
	{
		overWorkigTime = hoursWorked - BASIC_WORKING_TIME;

		// if you worked overtime
		if (overWorkigTime > 0)
		{
			regularPay = 40 * hourlyRate;
			overtimePay = overWorkigTime * (hourlyRate * OVERTIME_RATE);
		}
		else
		{
			regularPay = hoursWorked * hourlyRate;
			overtimePay = 0;
		}
		totalPay = regularPay + overtimePay;

		cout << fixed << showpoint << setprecision(2);
		cout << "================= Result =================" << endl;
		cout << "Regular Pay   |      $ " << setw(10) << right << regularPay << endl;
		cout << "Overtime Pay  |      $ " << setw(10) << right << overtimePay << endl;
		cout << "------------------------------------------" << endl;
		cout << "Total Pay     |      $ " << setw(10) << right << totalPay <<endl;
		cout << "==========================================" << endl;
	}
	else
	{
		cout << "Type your information correctly please..." << endl;
	}

	return 0;
}