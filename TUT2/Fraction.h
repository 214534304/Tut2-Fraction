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

    Fraction add(Fraction add);
	Fraction subtract(Fraction subtract);
	Fraction multiply(Fraction multiply);
	Fraction division(Fraction division);



	Fraction operator+(Fraction add);
	Fraction operator-(Fraction subtract);
	Fraction operator*(Fraction multiply);     //Operator Overloading
	Fraction operator/(Fraction division);

	void print();


};