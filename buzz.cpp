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

int main()
{
	// BUZZ 

	int LIMIT = 100;
	int a = 0;
	for (int a = 1; a < LIMIT; a++)
	{
		if (a % 15 == 0)
		{
			cout << "FIZZBUZZ" << endl;

		}

		else if (a % 5 == 0)
		{
			cout << "BUZZ" << endl;

		}

		else if (a % 3 == 0)
		{
			cout << "FIZZ" << endl;

		}

		else {

			cout << a << endl;
		} 

	}


endPrg();
	
}