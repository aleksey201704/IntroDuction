#include <iostream>

using namespace std;

#define tab "\t"


//double Distanse(double* x0,double*x1, double* y0, double* y1);



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
		cout << "Constructor" << this << endl;;
	}

	Point(const Point& other)
	{
		this->x = other.x;
		this->y = other.y;
		cout<< "CopyConstructor" << this << endl;
	}
	~Point()
	{
		cout << "DisConstructor:" << this << endl;
	}
	
	//				Operators:

	Point& operator=(const Point& other)
	{
		this->x = other.x;
		this->y = other.y;
		cout << "CopyAssigment:\t" << this << endl;
		return *this;
	}

	Point& operator+=(const Point& other)
	{
		this->x += other.x;
		this->y += other.y;
		return *this;

	}
	
	Point& operator++()  // Prefix increment
	{
		x++;
		y++;
		return *this;
	}

	Point operator++(int)  // Post increment CCылка надо убирать!!! ВНИМАНИЕ!!! & 
	{
		Point old = *this;
		x++;
		y++;

		return old;
	}

	Point& operator() (double x, double y)
	{
		set_x(x);
		set_y(y);
		return *this;
	}


	// Metods:
	void print()const
	{
		cout << "X = " << x << "\t Y = " << y << endl;
	}

	double Distatnse(const Point& other)const
	{
		double x_dist = this->x - other.x;
		double y_dist = this->y - other.y;
		double distatnse = sqrt(x_dist * x_dist + y_dist * y_dist);
		return distatnse;

	}

};
//class Car 
//{
//	double x;
//	double y;
//	double r;
//public:
//	
//	// Metods:
//
//
//
//	double Distanse(double x,double y)
//	{
//		this->x = x;
//		this->y = y;
//		
//		r = sqrt(x * x + y * y);
//		
//		return r;
//	}
//
//};
double Dist(const Point& A, const Point& B)
{
	double x_dist = A.get_x() - B.get_x();
	double y_dist = A.get_y() - B.get_y();
	return sqrt(pow(x_dist, 2) + pow(y_dist, 2));
}



Point operator+(const Point& left,const Point& right)
{
	Point result;
	result.set_x(left.get_x() + right.get_x());
	result.set_y(left.get_y() + right.get_y());
	return result;

}

//#define Constructors_CHECK
//#define Struct_POint
//#define Distanse
//#define ASSIGN_CHECK

void main() {
	setlocale(LC_ALL, "");
	
	int a = 2;
	int b = 3;
	int c = a + b;
	
	Point A(2, 3);
	Point B(7, 8);
	/*Point C = A + B;
	C.print();
	A += B;
	A.print();
	C++;
	C.print();*/
	
	A = B++;
	A.print();
	B.print();
	/*B.set_x(123);
	B.set_y(234);*/
	B(123, 234);
	B.print();



	//Point A; // DefaultConstractor

	//Point A(2, 3);
	//Point B = A; // CopyConstructor
	//B.print();

	//Point C; // Default Constructor
	//C = B;   // CopyAssingment;
	//C.print();

#ifdef ASSIGN_CHECK
	int a, b, c;
	a = b = c = 0;
	Point A, B, C;
	cout << "\n----------------------------\n";
	A = B = C = Point(7, 8);// Здесь мы явно вызываем конструтокр создает временный безыменяый обьект.
	// Временный безымяные обьекты сущетсвуеют в пределах одного выражения
	// Этот временный безымкенный обьект POint" становится операндом справом для первого оператора

	cout << "\n----------------------------\n";
	A.print();
	B.print();
	C.print();

	A = B + C;
#endif // ASSIGN_CHECK




#ifdef Distanse

Point A(2, 3);
	Point B(7, 8);
	cout << "\n-----------------------------\n";
	cout << "Расстояние от точки А до точки В = " << A.Distatnse(B)<< endl;
	cout << "\n-----------------------------\n";
	cout << "Расстояние от точки B до точки A = " << B.Distatnse(A) << endl;
	cout << "\n-----------------------------\n";
	cout << "Расстояние от точки B до точки A = " << Dist(A,B);
#endif // Distanse

#ifdef Constructors_CHECK
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
#endif // Constructors_CHECK


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


//double Distanse(double* x0, double* x1, double* y0, double* y1)
//{
//	double r=0;
//	double xr,yr;
//	xr = *(x1)- *(x0);
//	yr = *(y1) - *(y0);
//	r = sqrt(xr * xr + yr * yr);
//	return r;
//}