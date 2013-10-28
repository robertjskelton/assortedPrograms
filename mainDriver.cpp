#include <iostream>
#include <string>

using namespace std;

string endPrg()
{
    cout << "\nPress any key to end your program.\n";
    cin.clear();
    cin.ignore(100, '\n');
    cin.get();


}

int main1() {
	//get integer input
	cout << "Hello, type an interger! ";
	int a = 0;
	cin >> a;
	cout << "You have chosen your variable to be " << a << endl;

	//print out all numbers
	cout << "Would you like me to print all the numbers leading up to " << a << "? (yes or no) ";
	string answer = "no";
	cin >> answer;
	do {
		if ((answer == "yes") || (answer == "YES"))
		{
			for (int i = 0; i < a + 1; i++)
			{
				cout << i << " ";
			}
			endPrg();
		}

		else if ((answer == "no") || (answer == "NO"))
		{
			cout << "That sucks. End program now.";
			endPrg();
		}

		else
		{
			cout << "You didn't type in yes or no. Try that again pl0x. ";
			cin >> answer;
		}
	} while (!(answer == "yes") || !(answer == "YES") || !(answer == "no") || !(answer == "NO"));

endPrg();

}

int main()
{
	cout << "Welcome to the navigation panel! \nFrom here you can select many other programs to run.";
	cout << "\nHere is a list of some of the other programs:";
	cout << "\n1. Find all numbers below a positive number";

	cout << "\nTo access a program, type in the number of that program now: ";
	int ans = 0;
	cin >> ans;
	if (ans == 1)
	{
		cout << "You have chosen program 1.\n";
		main1();

	}
	else {
		cout << "That program does not exist yet, please try another program: ";
		cin >> ans;
		endPrg();

	}


}