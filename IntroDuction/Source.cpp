#include <iostream>

using namespace std;

#define tab "\t"
//#define Struct_POint

double Distanse(double* x0,double*x1, double* y0, double* y1);

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
class Car 
{
	double x;
	double y;
	double r;
public:
	
	// Metods:
	double Distanse(double x,double y)
	{
		this->x = x;
		this->y = y;
		
		r = sqrt(x * x + y * y);
		
		return r;
	}

};



void main() {
	setlocale(LC_ALL, "");
	//Point A; // DefaultConstractor
	Car D;
	double x = 0;
	double y = 0;
	double x0, x1;
	double y0, y1;
	
	cout << "Кордината до точки X = "; cin >> x;
	cout << "Кордината до точки Y = "; cin >> y;

	cout << "Расстояние до точки = " << D.Distanse(x, y) << endl;
	
	cout << "Кордината точки X0 = "; cin >> x0;
	cout << "Кордината точки Y0 = "; cin >> y0;
	cout << "Кордината точки X1 = "; cin >> x1;
	cout << "Кордината точки Y1 = "; cin >> y1;

	cout << "Расстояние между точками = " << Distanse(&x0, &x1, &y0, &y1);
	

	/*A.set_x(2);
	A.set_y(3);*/
	//cout << A.get_x() << tab << A.get_y() << endl;
	/*A.print();
	Point B(22, 33);
	B.print();*/

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

double Distanse(double* x0, double* x1, double* y0, double* y1)
{
	double r=0;
	double xr,yr;
	xr = *(x1)- *(x0);
	yr = *(y1) - *(y0);
	r = sqrt(xr * xr + yr * yr);
	return r;
}