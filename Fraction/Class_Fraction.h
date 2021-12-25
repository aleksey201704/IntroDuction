#pragma once
#include<iostream>
using namespace std;

class Fraction
{


public:
	int Numerator;
	int Denominator;


	// -----------Constructors----------------
	Fraction()
	{
		Numerator = 0;
		Denominator = 0;
	}

	Fraction(int Numerator, int Denominator)
	{
		this->Numerator = Numerator;
		this->Denominator = Denominator;
		/*cout << "����� ����������� = " << this << endl;
		cout << "\n------------------------------------\n";*/
	}

	// �opying the constructor

	Fraction(const Fraction& other)
	{
		Numerator = other.Numerator;
		Denominator = other.Denominator;
		/*cout << "����� ����� ����������� = " << this << endl;
		cout << "\n------------------------------------\n";*/
	}

	~Fraction()
	{

		/*cout << "����� �������������� = " << this << endl;
		cout << "\n------------------------------------\n";*/
	}

	// Methods

	Fraction to_proper(const Fraction& other)const
	{

		Fraction Correct;
		Correct.Numerator = other.Numerator;
		Correct.Denominator = other.Denominator;
		if (Correct.Denominator > Correct.Numerator)
		{
			cout << "���������� �����" << endl;
		}
		else if (Correct.Numerator % Correct.Denominator != 0)
		{

		}

		return Correct;
	}

	Fraction reduce(const Fraction& other)
	{
		Fraction result;
		int KratnoeD = 0,
			KratnoeN = 0,
			KratnoeS = 0;
		// ���������� ����� ��������
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
		result.Numerator = other.Numerator / KratnoeS;
		result.Denominator = other.Denominator / KratnoeS;
		return result;
	}

	void Print()const
	{
		cout << Numerator  << "/" << Denominator<<endl;
	}

	// Operators
	

};