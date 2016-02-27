#pragma once
class Fraction
{
public:
	Fraction();
	~Fraction();
};

class Fraction
{


private:
	int num1, num2;   // declarition of variable
	int  MixedNum(int, int);

public:
	Fraction(); // constructor
	~Fraction(); // deconstuctor

	// getting the numerator & denominator
	int Gnumerator();
	int Gdenominator();


	// setting the numerator & denominator
	void Snumerator(int num);
	void Sdenominator(int num);




};