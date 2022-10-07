/*
Author: Michelle Wen
Course: CSCI-135
Instructor: Mike Zamansky
Assignment: Lab 5

Test out all the functions are working.
*/
#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "funcs.h"

TEST_CASE("Divisible")
{
	CHECK(isDivisibleBy(100,5)==true);
	CHECK(isDivisibleBy(100,3)==false);
}

TEST_CASE("Prime")
{
        CHECK(isPrime(3)==true);
	CHECK(isPrime(4)==false);
}

TEST_CASE("Next Prime")
{
        CHECK(nextPrime(15)==17);
	CHECK(nextPrime(10)==11);
}

TEST_CASE("Amount of Prime")
{
        CHECK(countPrimes(1,10)==5);
	CHECK(countPrimes(1,11)==6);
}

TEST_CASE("Twin Prime")
{
        CHECK(isTwinPrime(5)==true);
	CHECK(isTwinPrime(23)==false);
}

TEST_CASE("Next Twin Prime")
{
        CHECK(nextTwinPrime(3)==5);
	CHECK(nextTwinPrime(19)==29);
}

TEST_CASE("Largest Twin Prime")
{
        CHECK(largestTwinPrime(5,18)==17);
	CHECK(largestTwinPrime(1,10)==7);
}






