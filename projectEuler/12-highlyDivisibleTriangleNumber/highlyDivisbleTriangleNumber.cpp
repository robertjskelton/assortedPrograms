/** 
*
* Author: 		Robert Skelton
* Date 			10.17.13
* Filename: 	highlyDivisbleTriangleNumber.cpp
* Email: 		robertjskelton@gmail.com
* Description:  What is the value of the first triangle number to have over five hundred divisors?
*
*/

#include <iostream>
#include <string> 
#include <math.h>
using namespace std;

int triNum(int x) {
	// not efficient algorithm 
	/*int triNum = 0;
	for (int i; i <= x; i++)
		triNum += i;
	return triNum;*/
	
	// efficient algorithm
	return x * (x + 1) / 2;
}

int numFactors(int num) {
	int size = 0;
	// cout << "The factors of " << num << " are: ";
	for(int factor = 1; factor <= sqrt(num); factor++)
		if(num % factor == 0) {
			//cout << factor << " ";
			size++;
		}
	//cout << "The number of factors of " << num << " is " << size << endl;
	return 2 * size;
}

int main() {
	for (int i = 1; i < 100000; i++) {
		int k = triNum(i);
		int j = numFactors(k);
		cout << i <<  ") The number of factors of " << k << " is " << j << "." << endl;
		if (j >= 500) {
			cout << "STOP! The number you are looking for is " << k << "." << endl;
			return 0;
		}
	}
}