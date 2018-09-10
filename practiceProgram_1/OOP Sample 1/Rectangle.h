// Specification file for the Rectangle class.
#ifndef RECTANGLE_H
#define RECTANGLE_H

// Rectangle class declaration.

class Rectangle
{
private:
	double width;
	double length;
public:
	Rectangle(); //Default constructor
	void setWidth(double);
	void setLength(double);
	double getWidth() const;
	double getLength() const;
	double getArea() const;
	double getDiagonal() const;
};

#endif