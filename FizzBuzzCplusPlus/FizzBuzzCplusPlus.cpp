// FizzBuzzCplusPlus.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;


int main()
{
	
	int x = 0;
	while (x < 100) {//while loop
		x++;
		if (((x % 3) == 0) && ((x % 5) == 0))//if Divisible by 3 and 5 output fizzbuzz
		{
			cout << "FIZZBUZZ";
		}//end if
		else if ((x % 3) == 0)//if Divisible by 3 output Fizz
		{
			cout << "FIZZ";
		}//end elseif 1
		else if ((x % 5) == 0)//If Divisible by 5 output Buzz
		{
			cout << "BUZZ";
		}//end elseif 2

		else
		{
			cout << x;//variable for loop
		}//end else

		cout << endl;

	}//end while loop
	do { cout << '\n' << "Press the Enter key to continue.";// pause
	} while (cin.get() != '\n');
    return 0;
}

