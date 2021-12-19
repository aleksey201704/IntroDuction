#include <iostream>

using namespace std;

class Fraction
{
	
public:
	int Numerator;
	int Denominator;

	// -----------Constructors----------------
	Fraction()
	{

	}

	Fraction(int Numerator, int Denominator)
	{
		this->Numerator=Numerator;
		this->Denominator=Denominator;
		cout << "Адрес конструтора = " << this << endl;
		cout << "\n------------------------------------\n";
	}

	// Сopying the constructor

	/*Fraction(const Fraction& other) 
	{
		this->Numerator = other.Numerator;
		this->Denominator = other.Denominator;
		cout << "Адрес Копии конструтора = " << this << endl;
		cout << "\n------------------------------------\n";
	}*/

	~Fraction()
	{
		
		cout << "Адрес Десконструтора = " << this << endl;
		cout << "\n------------------------------------\n";
	}

	// Methods

	void Print()const
	{
		cout<< Numerator << "/" << Denominator<<endl ;
	}
};

Fraction operator+(const Fraction& left, const Fraction& right)
{
	Fraction result;
	result.Numerator = left.Numerator + right.Numerator;
	result.Denominator = right.Denominator + left.Denominator;
	return result;
}

void main() 
{
	setlocale(LC_ALL, "");

	Fraction A(10,14) ;
	Fraction B(10,25);
	Fraction C = A + B;
	//A = B;
	A.Print();
	B.Print();
	C.Print();

	

}