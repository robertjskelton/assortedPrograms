/** 
*
* Author: 		Robert Skelton
* Date 			10.6.13
* Filename: 	multiplesof3and5.cpp
* Email: 		robertjskelton@gmail.com
* Description:  Project Euler Problem 1: If we list all the natural numbers below 10 that are multiples of 3 or 5, we get 3, 5, 6 and 9. 
*				The sum of these multiples is 23.
* 				Find the sum of all the multiples of 3 or 5 below 1000.
*
*/

#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
	// vector<int> allInts;
	int sum = 0;
	// cout << "The numbers below 1000 that are multiples of 3 and 5 are: " << endl;
	for (int i = 0; i < 1000; i ++) {
		if ((i % 3 == 0) || (i % 5 == 0)) {
			sum += i;
			// allInts.push_back(i);
			// cout << i << endl;
		}
	}

	cout << "\nThe total sum is: " << sum << endl;

/*	// cout << "allInts contains: " << endl;
	 for (vector<int>::iterator itr = allInts.begin(); itr != allInts.end(); ++itr) {
		// cout << " " << *itr << endl;
		sum += *itr;
	 }
	 cout << "\nThe total sum is: " << sum << endl;*/
}