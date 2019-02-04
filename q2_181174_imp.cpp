#include "q2_181174.h"

int Rectangle:: getWidth(int width)const//getter for width
{
	return width;
}
int Rectangle::getLength(int )const//getter for length
{
	return length;
}
void Rectangle::setWidth(int w)//setting width of rectangle
{	
	width = w;
}
void Rectangle::setLength(int l)//settinglength of rectangle
{
	length = l;
}
int Rectangle::getArea(int width,int length)const//calculating the area
{
	int Area = width * length;
	return Area;
}
void Rectangle::rotateRectangle(int &width, int &length)//exchanging the dimensions of rectangle
{
	int temp;
	width = temp;
	temp = length;
	length = width;
	cout << "length:" << length;
	cout<<"width" << width;
}
void Rectangle::draw(int width, int length)const//printing the rectangle
{
	for (int i = 0;i < length;i++)
	{
		for (int j = 0;j < width;j++)
		{
			cout << '*';
		}cout << endl;
	}
}