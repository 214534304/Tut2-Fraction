#pragma once
class Fraction
{
public:
	Fraction();
	~Fraction();
};

#pragma once
class Fraction
{


private:
	int num1, num2;   // declarition of variable
	int  MixedNum(int, int);

public:
	Fraction(int N = 0, int D = 1); // constructor
	~Fraction(); // deconstuctor

	// getting the numerator & denominator
	int Getnumerator();
	int Getdenominator();


	// setting the numerator & denominator
	void Setnumerator(int num);
	void Setdenominator(int num);

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