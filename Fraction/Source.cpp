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
	
	C = A + B;
	cout << "�������� ������ = ";
	C.Print();
	/*D.reduce(C);
	D.Print();
	*/
			
	C = A * B;
	cout << "��������� ������ = ";
	C.Print();
	
	C = A / B;
	cout << "������� ������ = ";
	C.Print();
	
	(A == B) ? cout << "������ �����" : cout << "�� ������ �����";
	
}