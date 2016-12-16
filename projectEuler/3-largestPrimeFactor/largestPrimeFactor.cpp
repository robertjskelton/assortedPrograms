/** 
*
* Author: 		Robert Skelton
* Date 			10.8.13
* Filename: 	largestPrimeFactor.cpp
* Email: 		robertjskelton@gmail.com
* Description:  The prime factors of 13195 are 5, 7, 13 and 29.
*				What is the largest prime factor of the number 600851475143?
*
*/

#include <iostream>
#include <string>
#include <vector>
#include <math.h>   
using namespace std;

/*bool isPrime(int number)
{
    for (int i = 2; i < sqrt(number); i++)
    {
       if(number % i != 0)
			return true;
		else 
			return false;
	}  
}

int main() {
	vector<int> factors;
	// find primes of 13195
	int toFactor = 13195;
	int factorToTest = 3;
	for (int i = 1; i < toFactor; i++) {
		if (toFactor % i == 0) {
			if (isPrime(i))
				factors.push_back(i);
		}
	}

	cout << "The prime factors of " << toFactor << " are :" << endl;
	for (vector<int>::iterator itr = factors.begin(); itr != factors.end(); ++itr) {
		cout << " " << *itr << endl;
	}

}*/


int main() {
	long long n = 256; // long long needed because int is too small
    int z = 2;

    while (z <= sqrt(n)) {
        if (n % z == 0) {
            cout << "Prime factor: " << z << endl;
            n = n / z;

        }
        else
            z++;
    }

    if (n > 1) // this will print out the last/largest factor
        cout << "Largest prime factor: " << n << endl;
}