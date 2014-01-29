/** 
*
* Author: 		Robert Skelton
* Date 			10.18.13
* Filename: 	econGrades.cpp
* Email: 		robertjskelton@gmail.com
* Description:  Finds the average grades needed to make an A or B in Dr. Biel's Microeconomics class. 
*				Substitue in your values for the HW and tests.
*
*/

#include <iostream>
#include <string>
using namespace std;

int main() {
	double OLhw = 0; // 99
	double OLtest = 0; // 95
	double ICtest1 = 0; // 77.5
	double ICtest2 = 0; // 92.5
	double ICtest3;
	double final;

	double finalAvg = .13 * OLhw + .2 * OLtest + .15 * ICtest1 + .15 * ICtest2 + .15 * ICtest3 + .25 * final;

	cout << "Enter 0 if you don't have a grade yet.\n" << endl;
	cout << "What is your online Homework average? ";
	cin >> OLhw;
	cout << "What is your online tests average? ";
	cin >> OLtest;
	cout << "What did you make on test 1? ";
	cin >> ICtest1;
	cout << "What did you make on test 2? ";
	cin >> ICtest2;
	cout << "What did you make on test 3? ";
	cin >> ICtest3;
	cout << "What did you make on the final? ";
	cin >> final;

	if (OLhw > 0 && OLtest > 0 && ICtest1 > 0 && ICtest2 > 0 && ICtest3 == 0 && final == 0) {
		double avgNeededA = (89.5 - .13 * OLhw - .2 * OLtest - .15 * ICtest1 - .15 * ICtest2) / .4;
		cout << "To get an A, you have to average a " << avgNeededA << endl;
		double avgNeededB = (79.5 - .13 * OLhw - .2 * OLtest - .15 * ICtest1 - .15 * ICtest2) / .4;
		cout << "To get a B, you have to average a " << avgNeededB << endl;
	}
	cout << "Press enter to end.";
	cin.get();
	cin.ignore();
	return 0;
}