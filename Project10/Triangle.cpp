#include"Triangle.h"
int Triangle::counter = 0;
float Triangle::sumArea = 0;

	Triangle::Triangle():a(1), b(1), c(1) {
		counter++;
		sumArea+=GetArea();
	}
	Triangle::Triangle(int a, int b, int c) : a(1), b(1), c(1) {
		SetABC(a, b, c);
		sumArea += GetArea();
		++counter;
	}
	Triangle::Triangle(int side): Triangle::Triangle(side,side,side){}
	
	void Triangle::SetA(int a) {
		if (a > 1)
			this->a = a;
	}
	void Triangle::SetB(int b) {
		if (b > 1)
			this->b = b;
	}
	void Triangle::SetC(int c) {
		if (c > 1)
			this->c = c;
	}
	void Triangle::SetABC(int a, int b, int c) {
		SetA(a);
		SetB(b);
		SetC(c);
	}
	void Triangle::Print()const {
		cout << "A: " << a << endl << "B: " << b << endl << "C: " << c << endl;
	}
	float Triangle::GetArea()const {
		float p = float(GetPerimeter()) / 2;
		float area = sqrt(p * (p - a) * (p - b) * (p - c));
		if (!isnan(area))
			return area;
		else
			return 0;
	}
	int Triangle::GetPerimeter()const {
		return a + b + c;
	}
	int Triangle::GetA()const {
		return a;
	}
	int Triangle::GetB()const {
		return b;
	}
	int Triangle::GetC()const {
		return c;
	}
	int Triangle::GetCounter(){
		return counter;
	}

	float Triangle::GetSumArea() {
		return sumArea;
	}
