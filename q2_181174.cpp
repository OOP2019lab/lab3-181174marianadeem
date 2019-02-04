// q2_181174.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include"q2_181174.h"

int main()
{
	Rectangle r1;
	int a, b;
	cout << "enter the width" << endl;//tAking input from the user
	cin >> a;
	cout << "enter the length" << endl;
	cin >> b;
	r1.setLength(b);//setter for dimensions
	r1.setWidth(a);
	cout << "width is:" << r1.getWidth(a)<<endl;//getter for dimensions
	cout << "length is:" << r1.getLength(b) << endl;
	int c = r1.getArea(a, b);//getting the area
	cout << "Area is:" <<c<<endl;
	cout << "Dimensions after rotation:";//rotating the dimensions
	r1.rotateRectangle(a, b);
	cout << "printing the rectangle";//printing the rectangle
	r1.draw(a, b);
	return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
