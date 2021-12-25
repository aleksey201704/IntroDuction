#pragma once
#include "Class_Fraction.h"
using namespace std;


Fraction operator+(const Fraction& left, const Fraction& right)
{
	Fraction result;
	int AllNumerator = 0,
		AllDenominator = 0;
	

	//Наименьшее общее кратное

	AllDenominator = (left.Denominator > right.Denominator) ? left.Denominator : right.Denominator;
	do
	{
		if (AllDenominator % left.Denominator == 0 and AllDenominator % right.Denominator == 0)
		{
			break;
		}
		else
		{
			++AllDenominator;
		}

	} while (true);

	result.Numerator = (AllDenominator / left.Denominator) * left.Numerator
		+ (AllDenominator / right.Denominator) * right.Numerator;


	result.Denominator = AllDenominator;

	
	result.Numerator = (AllDenominator / left.Denominator) * left.Numerator
		+ (AllDenominator / right.Denominator) * right.Numerator;

	result.Denominator = AllDenominator;

	return result;
}

Fraction operator-(const Fraction& left, const Fraction& right) {

	Fraction result;
	result.Denominator = 0;
	result.Numerator = 0;
	return result;
}

Fraction operator*(const Fraction& left, const Fraction& right)
{
	Fraction result;
	int KratnoeD = 0,
		KratnoeN = 0,
		KratnoeS = 0;

	result.Numerator = left.Numerator * right.Numerator;
	result.Denominator = left.Denominator * right.Denominator;

	// Найбольший общий делитель
	KratnoeD = result.Denominator;
	KratnoeN = result.Numerator;
	if (KratnoeD > KratnoeN)
	{
		KratnoeS = KratnoeD;
	}
	else
	{
		KratnoeS = KratnoeN;
	}

	for (int i = KratnoeS; i > 0; i--)
	{
		if (KratnoeD % i == 0 && KratnoeN % i == 0)
		{
			KratnoeS = i;
			break;
		}
	}

	result.Numerator = (left.Numerator * right.Numerator) / KratnoeS;
	result.Denominator = (left.Denominator * right.Denominator) / KratnoeS;

	return result;
}

Fraction operator/(const Fraction& left, const Fraction& right)
{
	Fraction result;
	int KratnoeD = 0,
		KratnoeN = 0,
		KratnoeS = 0;
	result.Numerator = left.Numerator * right.Denominator;
	result.Denominator = left.Denominator * right.Numerator;

	// Найбольший общий делитель
	KratnoeD = result.Denominator;
	KratnoeN = result.Numerator;
	if (KratnoeD > KratnoeN)
	{
		KratnoeS = KratnoeD;
	}
	else
	{
		KratnoeS = KratnoeN;
	}

	for (int i = KratnoeS; i > 0; i--)
	{
		if (KratnoeD % i == 0 && KratnoeN % i == 0)
		{
			KratnoeS = i;
			break;
		}
	}

	result.Numerator = (left.Numerator * right.Denominator)/KratnoeS;
	result.Denominator = (left.Denominator * right.Numerator)/KratnoeS;


	return result;
}

bool operator==(const Fraction& left, const Fraction& right)
{
	bool result;
	double N, D;
	N = left.Numerator / left.Denominator;
	D = right.Numerator / right.Denominator;
	result = (N == D) ? 1 : 0;
	return result;
}