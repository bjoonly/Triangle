#include<iostream>
#include"Triangle.h"
using namespace std;

int main() {
	Triangle t1(2,5,6),t2(3),t3;
	cout << "\nFirst triangle:\n";
	t1.Print();
	cout << "\nP = " << t1.GetPerimeter() << endl;
	cout << "\nS = " << t1.GetArea() << endl;
	cout << "\nSecond triangle:\n";
	t2.Print();
	cout << "\nP = " << t2.GetPerimeter() << endl;
	cout << "\nS = " << t2.GetArea() << endl;
	cout << "\nThird triangle:\n";
	t3.Print();
	cout << "\nP = " << t3.GetPerimeter() << endl;
	cout << "\nS = " << t3.GetArea() << endl;
	cout << "\nNumber of triangles: "<<Triangle::GetCounter() << endl;
	cout <<"\nSum area: " <<Triangle::GetSumArea() << endl;
	return 0;
}