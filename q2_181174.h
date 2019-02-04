#pragma once
#include<iostream>
using namespace std;

class Rectangle
{
 private:
	int width;
	int length;
 public:
	 int getWidth(int width)const;
	 int getLength(int length)const;
	 void setWidth(int w);
	 void setLength(int l);
	 int getArea(int width,int length)const;
	 void rotateRectangle(int&width, int&length);
	 void draw(int width,int length)const;
};
