#include "Fraction.h"
#include<iostream>
using namespace std;


Fraction::Fraction()
{
}


Fraction::~Fraction()
{
}
int Fraction::Getnumerator()
{
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




void Fraction::Setnumerator(int num)
{
	num2 = num;
};



