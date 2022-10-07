/*
Author: Michelle Wen
Course: CSCI-135
Instructor: Mike Zamansky
Assignment: Lab 5

Main to test all functions.
*/

#include <iostream>
#include "funcs.h"

int main()
{
	std::cout << "isDivisibleBy(10,5);\n"; 
	if(isDivisibleBy(10,5)) {
		std::cout << "Yes \n";
	} else {
		std::cout << "No \n";
	}
	std::cout << "isDivisibleBy(10,3);\n";
        if(isDivisibleBy(10,3)) {
                std::cout << "Yes \n";
        } else {
                std::cout << "No \n";
        }
	std::cout << "\n------------------\n";

	std::cout << "isPrime(7);\n";
	if(isPrime(7)) {
		std::cout << "Yes \n";
	} else {
		std::cout << "No \n";
	}
	std::cout << "isPrime(6);\n";
        if(isPrime(6)) {
                std::cout << "Yes \n";
        } else {
                std::cout << "No \n";
        }
	std::cout << "\n------------------\n";

	std::cout << "nextPrime(3);\n";
        std::cout << nextPrime(3);
        std::cout << "\n------------------\n";

	std::cout << "countPrimes(1,11);\n";
	std::cout << countPrimes(1,11);
        std::cout << "\n------------------\n";

	std::cout << "isTwinPrime(3);\n";
	if(isTwinPrime(3)) {
                std::cout << "Yes \n";
        } else {
                std::cout << "No \n";
        }
	std::cout << "isTwinPrime(23);\n";
        if(isTwinPrime(23)) {
                std::cout << "Yes \n";
        } else {
                std::cout << "No \n";
        }
        std::cout << "\n------------------\n";

	std::cout << "nextTwinPrime(19);\n";
	std::cout << nextTwinPrime(19);
        std::cout << "\n------------------\n";

	std::cout << "largestTwinPrime(1,18);\n";
	std::cout << largestTwinPrime(1,18); 
	std::cout << "\nlargestTwinPrime(20,25);\n";
        std::cout << largestTwinPrime(20,25);
        std::cout << "\n------------------\n";
	
	return 0;
}
