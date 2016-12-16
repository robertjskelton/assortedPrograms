/** 
*
* Author: 		Robert Skelton
* Date 			10.8.13
* Filename: 	smallestMultiple.cpp
* Email: 		robertjskelton@gmail.com
* Description:  2520 is the smallest number that can be divided by each of the numbers from 1 to 10 without any remainder.
*				What is the smallest positive number that is evenly divisible by all of the numbers from 1 to 20?
*
*
*/

#include <iostream>
#include <string>
using namespace std;

int main() {
	for (long long i = 2000; i < 999999999999999; i++) {
		int div = 2; // everything is divisible by 1...
		while (i % div == 0) {
			if (div == 20) {// check if it has been divided by everything up to 10
				cout << i << " is the smallest number evenly divisible by 1 through " << div << "." << endl;
				return 0;
			}
			else // if not, increment the number
				div++; 
		}
	}
}