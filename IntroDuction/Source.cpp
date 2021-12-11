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

	Point()
	{
		x = y = 0;
		cout << "DefaultConstructor:" << this << endl;
	}
	Point(double x, double y) 
	{
		this->x = x;
		this->y = y;
		cout << "Constrictor" << this << endl;;
	}
	~Point()
	{
		cout << "DisConstructor:" << this << endl;
	}
	// Metods:
	void print()const
	{
		cout << "X = " << x << "\t Y = " << y << endl;
	}
};

//#define Struct_POint

void main() {
	setlocale(LC_ALL, "");
	Point A; // DefaultConstractor
	double x, y;
	/*A.set_x(2);
	A.set_y(3);*/
	//cout << A.get_x() << tab << A.get_y() << endl;
	A.print();
	Point B(22, 33);
	B.print();

#ifdef Struct_POint
	//type name;
	int a; // Обьявляем переменную 'а' типа 'int'
	Point A; // Обьявляем переменную 'A' типа 'Point'
			// Создаем обьект (экзапляр) струткутры 'Point';
	A.x = 2;
	A.y = 3;
	cout << A.x << tab << A.y << endl;

	Point* pA = &A; //создаем указатель на обьект нашей струтктуры

	cout << pA->x << tab << pA->y << endl;
#endif // Struct_POint

	
}