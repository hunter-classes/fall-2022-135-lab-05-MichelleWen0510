/*
Author: Michelle Wen
Course: CSCI-135
Instructor: Mike Zamansky
Assignment: Lab 5

Functions with prime number
*/

#include <iostream>
#include "funcs.h"

bool isDivisibleBy(int n, int d)
{
	if(n%d==0)
	{
		return true;
	} else {
		return false;
	}
}

bool isPrime(int n)
{
	int num=0;
	for(int i=1; i<=n;i++)
	{
		if(n%i==0)
		{
			num++;
		}
	}
	if(num > 2)
	{
		return false;
	} else {
		return true;
	}
	
}

int nextPrime(int n)
{
	n++;
	while(!isPrime(n))
	{
		n++;
	}
	return n;
}

int countPrimes(int a, int b)
{
	int num=0;
	for(int i=a; i<=b;i++)
	{
		if(isPrime(i))
		{
			num++;
		}
	}
	return num;
}

bool isTwinPrime(int n)
{
	if(isPrime(n) && (isPrime(n-2) || isPrime(n+2)))
	{
		return true;
	} else {
		return false;
	}
}

int nextTwinPrime(int n)
{
	n+=2;
	while(!isTwinPrime(n))
	{
		n++;
	}
	return n;
}

int largestTwinPrime(int a, int b)
{
	while(!isTwinPrime(b) && b>a)
        {
             	b--;
        }
	if(isTwinPrime(b))
	{
		return b;
	} else {
		return -1;
	}
}





