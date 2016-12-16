/** 
*
* Author: 		Robert Skelton
* Date 			10.8.13
* Filename: 	sumSquareDifference.cpp
* Email: 		robertjskelton@gmail.com
* Description:  The sum of the squares of the first ten natural numbers is...     1^2 + 2^2 + ... + 10^2 = 385
*				The square of the sum of the first ten natural numbers is...	  (1 + 2 + ... + 10)^2 = 55^2 = 3025
*				Hence the difference between the sum of the squares of the first ten natural numbers and the square of the sum is 3025 − 385 = 2640.
*				Find the difference between the sum of the squares of the first one hundred natural numbers and the square of the sum.
*
*
*/

#include <iostream>
#include <string>
#include <math.h>
using namespace std;

int main() {
	// first find the sum of squares
	long sum1 = 0;
	long sum2 = 0;
	int LIMIT = 100; // use the limit you want
	for (int i = 1; i <= LIMIT; i++)
		sum1 += pow (i, 2);

	cout << "The sum of the sqaures is: " << sum1 << endl;

	// now find the square of the sums
	int sum = 0;
	for (int i = 1; i <= LIMIT; i++)
		sum += i;

	sum2 = pow(sum, 2);
	cout << "The square of the sums is: " << sum2 << endl;

	// now subtract
	cout << "The difference of the two numbers is: " << (sum2 - sum1) << ". QED" << endl;
}