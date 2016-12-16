/** 
*
* Author: 		Robert Skelton
* Date 			10.8.13
* Filename: 	largestPalindrome.cpp
* Email: 		robertjskelton@gmail.com
* Description:  A palindromic number reads the same both ways. The largest palindrome made from the product of two 2-digit numbers is 9009 = 91 × 99.
*				Find the largest palindrome made from the product of two 3-digit numbers.
*
*/

#include <iostream>
#include <string>
#include <vector>
using namespace std;

int ReverseNumber(int num) {
	int newNum = 0;
	while(num > 0)
	{
		newNum = newNum * 10 + (num % 10);
		num = num / 10;
	}
	return newNum;
}


int main() {
	vector<int> pals;
	/* Series of tests to verify ReverseNumber() */
	/*cout << "Test!!" <<endl;
	int a = 10212;
	int b = 11239;
	int c = 19820;
	int d = 999*999;
	cout << a << " " << ReverseNumber(a) << endl;
	cout << b << " " << ReverseNumber(b) << endl;
	cout << c << " " << ReverseNumber(c) << endl;
	cout << d << " " << ReverseNumber(d) << endl;*/
	int product = 0;
	for (int no1 = 1; no1 < 1000; no1++) {
		for (int no2 = 1; no2 < 1000; no2++) {
			product = no1 * no2;
			if (ReverseNumber(product) == product) {
				pals.push_back(product);
				//cout << "The palinromic product is " << product << endl;
			}
		}
	}
	
	/* I have found all palindromes and stored them in vector pals, so now we need to find the largest*/
	int palsMax = 0;
	for (unsigned int i = 0; i < pals.size(); i++)
		if (pals[i] > palsMax)
			palsMax = pals[i];

		cout << "The largest Palindrome is: " << palsMax << endl;
	}