#include "Fraction.h"
#include <iostream>
using namespace std;


Fraction::Fraction(int N, int D)// constructor
{
	num1 = N;
	num2 = D;
};

Fraction::~Fraction()
{
}
int Fraction::Getnumerator()
{                                  //using accessor to retrieve the value required
	return num1;
};


int Fraction::Getdenominator()
{
	return num2;
};


void Fraction::Setdenominator(int num)
{
	num1 = num;
};

                              //using mutator to modify the current value in the memory


void Fraction::Setnumerator(int num)
{
	num2 = num;
};

Fraction Fraction::add(Fraction add)
{
	return Fraction(num1*add.num2 + add.num1*num2, num2*add.num2);
};


Fraction Fraction::subtract(Fraction subtract)
{
	return Fraction(num1*subtract.num2 - subtract.num1*num2, num2*subtract.num2);
};


Fraction Fraction::multiply(Fraction multiply)
{
	return Fraction(num1*multiply.num1, num2*multiply.num2);
};




Fraction Fraction::division(Fraction division)
{
	return Fraction(num1*division.num2, num2*division.num1);


};


int Fraction::MixedNum(int num1, int num2)
{
	// Recursive form of getting the gcd of numerator and denominator
	if (num2 == 0)
	{
		return num1;
	}
	else
	{
		return MixedNum(num2, num1 % num2);
	}
}


void Fraction::print() //displaying results
{
	int gcd = MixedNum(num1, num2);


	int num3, num4;
	if (num1> num2) // Checking if it's a mixed fraction
	{
		num3 = (num1 / gcd) / (num2 / gcd);
		num4 = num1 % num2;
		cout << "answer is " << num3 << " " << num4<< "/" << (num2 / gcd) << endl;
	}
	else if (num1 == num2) // checking for equal deno and num to print result as integer
	{
		num3 = (num1 / gcd) / (num2 / gcd);
		cout << "answer is " << num3 << endl;
	}
	else
	{
		cout << "answer is " << num1/ gcd << "/" << num2/ gcd;
	}
};


Fraction Fraction::operator+(Fraction add)
{
	return Fraction(num1*add.num2 + add.num1*num2, num2*add.num2);
};


Fraction Fraction::operator-(Fraction subtract)
{
	return Fraction(num1*subtract.num2 - subtract.num1*num2, num2*subtract.num2);
};


Fraction Fraction::operator*(Fraction multiply)
{
	return Fraction(num1*multiply.num1, num2*multiply.num2);
};




Fraction Fraction::operator/(Fraction division)
{
	return Fraction(num1*division.num2, num2*division.num1);


};






Fraction::~Fraction() // deconstructor
{
}



