/** 
*
* Author: 		Robert Skelton
* Date 			10.8.13
* Filename: 	10001stPrime.cpp
* Email: 		robertjskelton@gmail.com
* Description:  By listing the first six prime numbers: 2, 3, 5, 7, 11, and 13, we can see that the 6th prime is 13.
*				What is the 10,001st prime number?
*
*/

#include <iostream>
#include <string>
using namespace std;

bool isPrime(int number) {	
	for (int i = 2; i < number; i++)
	{
		if (number % i == 0)
			return false;
	}
	return true;	
}

int main() {
	int GOAL = 10001; // this is which # prime number you are looking for
	int LIMIT = 999999; // max value. keep this pretty large.
	int count = -1; //  start at -1 because 1 is not considered prime
	for (int i = 1; i < LIMIT; i++) {
		if(isPrime(i)) {
			count++;
			if(count == GOAL) {
				cout << "The " << GOAL << "th prime number is " << i << endl;
				return 0; // and exit if found
			}
		}
	}
}