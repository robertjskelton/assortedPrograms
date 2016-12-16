/** 
*
* Author: 		Robert Skelton
* Date 			10.17.13
* Filename: 	summationOfPrimes.cpp
* Email: 		robertjskelton@gmail.com
* Description:  The sum of the primes below 10 is 2 + 3 + 5 + 7 = 17.
*				Find the sum of all the primes below two million.
*
*/

#include <iostream>
#include <string>
#include <math.h>
using namespace std;

// this algorithm is creazy slow
bool isPrime1(int number) {	
	for (int i = 2; i < number; i++)
	{
		if (number % i == 0)
			return false;
	}
	return true;	
}

// much faster algorithm
bool isPrime(int n){
    int i;
    if (n == 2)
        return true;
    if (n % 2 == 0)
        return false;
    for (i = 3; i <= sqrt(n); i += 2)
        if (n % i == 0)
            return false;
    return true;
}

int main() {
	long long sum = 0;
	for(int i = 2; i < 2000000; i++)
	{
		if (isPrime(i)) {
			cout << "Added " << i << " to the list of Primes." << endl;
			sum += i;
		}
	}
	cout << "The final sum is: " << sum << endl;
}