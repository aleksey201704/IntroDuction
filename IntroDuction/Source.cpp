#include <iostream>

using namespace std;

#define tab "\t"

class Point
{
	double x;
	double y;
public:
	double get_x() const
	{
		return x;

	}
	
	double get_y() const
	{
		return y;

	}

	void set_x(double x) 
	{
		this->x = x;
	}
	void set_y(double y) 
	{
		this->y = y;
	}

};

//#define Struct_POint

void main() {
	setlocale(LC_ALL, "");
	Point A;
	A.set_x(2);
	A.set_y(3);

	cout << A.get_x() << tab << A.get_y() << endl;

#ifdef Struct_POint
	//type name;
	int a; // ��������� ���������� '�' ���� 'int'
	Point A; // ��������� ���������� 'A' ���� 'Point'
			// ������� ������ (��������) ���������� 'Point';
	A.x = 2;
	A.y = 3;
	cout << A.x << tab << A.y << endl;

	Point* pA = &A; //������� ��������� �� ������ ����� ����������

	cout << pA->x << tab << pA->y << endl;
#endif // Struct_POint

	
}