#include <iostream>
#include"Class_Fraction.h"
#include "Fraction_Operators.h"
using namespace std;

void main() 
{
	setlocale(LC_ALL, "");

	Fraction A(3,7) ;
	Fraction B(4,8);
	Fraction C,D;
	
	A.Print();
	B.Print();
	cout << "\n-----------------------\n";

	C = A + B;
	cout << "Сложение дробей = ";
	C.Print();
	
	cout << "Сокращение дроби = "; C.reduce(C);
	C.Print();
	cout << "\n-----------------------\n";
	
	C = A * B;
	cout << "Умножение дробей = ";
	C.Print();
	
	C = A / B;
	cout << "Деление дробей = ";
	C.Print();
	cout << "\n-----------------------\n";
	(A == B) ? cout << "Равные дроби" : cout << "Не равные дроби";
	
}