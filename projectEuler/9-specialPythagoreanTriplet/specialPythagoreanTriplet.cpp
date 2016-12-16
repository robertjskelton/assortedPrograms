/** 
*
* Author: 		Robert Skelton
* Date 			10.9.13
* Filename: 	specialPythagoreanTriplet.cpp
* Email: 		robertjskelton@gmail.com
* Description:  A Pythagorean triplet is a set of three natural numbers, a < b < c, for which, a^2 + b^2 = c^2
*				For example, 3^2 + 4^2 = 9 + 16 = 25 = 5^2.
*				There exists exactly one Pythagorean triplet for which a + b + c = 1000. Find the product abc.
*
*/

#include <iostream>
#include <string>
#include <math.h>
using namespace std;

/*
BEWARE:
Nested Loops Ahead!

BEWARE:
Nested Loops Ahead!
*/

int main() {
	int LIMIT = 1000;
	for (int i = 1; i < 450; i++) 
		for (int j = 1; j < 450; j++) 
			for (int k = 1; k < 450; k++) 
				if (pow(i, 2) + pow(j, 2) == pow(k, 2))
					if (i + j + k == LIMIT) {
					cout << "The three numbers are: " << i << " " << j << " " << k << "." << endl;
					cout << "The product of the three numbers are: " << (i * j * k) << "." << endl;
					return 0;
					}
}