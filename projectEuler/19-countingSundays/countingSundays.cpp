/** 
*
* Author: 		Robert Skelton
* Date 			10.18.13
* Filename: 	countingSundays.cpp
* Email: 		robertjskelton@gmail.com
* Description:  How many Sundays fell on the first of the month during the twentieth century (1 Jan 1901 to 31 Dec 2000)?
*
*/

#include <iostream>
#include <string> 
#include <math.h>
using namespace std;


int main() {
   int countSun = 0, daysInMonth, daysPassed = 1;

    for (int year = 1901; year <= 2000; year++) {
        for (int month = 1; month <= 12; month++) {
            if (month == 4 || month == 6 || month == 9 || month == 11) 
                daysInMonth = 30;
            else if (month == 2) { // february
                if (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0)) 
                    daysInMonth = 29;
                else
                    daysInMonth = 28;
            } 
            else 
                daysInMonth = 31;

            if (daysPassed % 7 == 0) 
                countSun++;
            
            daysPassed += daysInMonth;
        }
    }
    cout << countSun - 1 << endl;
    cin.ignore();
    return 0;
}