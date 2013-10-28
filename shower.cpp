#include <iostream>
#include <string>

using namespace std;

int temp = 70; //initialize temp to 70 degrees
int pressure = 1; // initialize pressure to 1


char tempUp()
{
	temp++;

}

char tempDown()
{
	temp--;

}

string printMessage()
{
	cout << "Your shower is " << temp << " degrees, and the pressure is " << pressure << ". Would you like to change anything?";

}

string endPrg()
{
    cout << "\nPress any key to end your program.\n";
    cin.clear();
    cin.ignore(100, '\n');
    cin.get();

}

int main()
{
	printMessage();
	string response;
	cin >> response;
	if (response == "yes")
	{	
		cout << "To make it hotter, type 1. To make it colder type 2.";
		int resp1;
		switch (resp1)
		{
			case 1:
				tempUp();
				break;
			case 2:
				tempDown();
				break;
			default:
				cout << "That was not an option";
				break;
		}
		printMessage();
		endPrg();
	}


}