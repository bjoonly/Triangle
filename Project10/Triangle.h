#pragma once
#include<iostream>
#include<cmath>

using namespace std;
class Triangle {
	int a;
	int b;
	int c;
	static int counter;
	static float sumArea;
public:
	Triangle();
	Triangle(int a, int b, int c);
	Triangle(int side);
	void SetA(int a);
	void SetB(int b);
	void SetC(int c);
	void SetABC(int a, int b, int c);
	void Print()const;
	float GetArea()const;
	int GetPerimeter()const;
	int GetA()const;
	int GetB()const;
	int GetC()const;
	static int GetCounter(); 
	static float GetSumArea();
};
