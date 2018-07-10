/* Michael Braunstein
Exercise 5-10 header file
This class will define a rectangle

5-10.    a.    Modify the rectangle class from 5-8b (shown above and attached) so rectangles
can be added or subtracted by overloading the + and - operators to mean adding the length and 
width of both rectangles or subtracting the lengths and widths of the second rectangle 
from the first rectangle.
b.    Modify the rectangle class again so rectangles can be compared by overloading 
the comparison operators (==, !=, <, >) to compare the area of the two rectangles.

Use the following ex5-10.cpp and create the corresponding rectangle5-10.h header file.
Attach and submit the rectangle5-10.h with both parts a and b and the output .txt file.

*/

#include<iostream>
using namespace std;
class rectangle510
{
protected:
	float length;
	float width;
	float area;
	float perimeter;
	float sum;
	float diff;




public:


	rectangle510(float l, float w)
	{
		setlength(l);
		setwidth(w);
		area = 1;
		perimeter = 4;
	}
	float operator+(rectangle510 r)
	{
		float sum;
		sum = (length + width) + (r.getlength() + r.getwidth());
		return sum;


	}

	float operator-(rectangle510 r)
	{
		float diff;
		diff = (length + width) - (r.getlength() + r.getwidth());
		return diff;


	}

	void setlength(float l)
	{
		length = l;
	}
	void setwidth(float w)
	{
		width = w;
	}


	void calcarea()
	{
		area = length * width;
	}
	void calcperimeter()
	{
		perimeter = 2 * (length + width);
	}

	float getlength()
	{
		return length;
	}
	float getwidth()
	{
		return width;
	}
	float getarea()
	{
		return area;
	}
	float getperimeter()
	{
		return perimeter;
	}
	void print() {
		cout << "length " << length << "width " << width << "area " << " " << area << " " << " " << "Sum " << sum << "diff " << diff << "\n";
	}
	float getsum()
	{
		return sum;
	}
	bool getdif()
	{
		return diff;
	}
	bool operator>(rectangle510 r)
	{
		if (sum > r.sum)
			return true;
		else
			return false;
	}

	bool operator <(rectangle510 r)
	{
		if (sum < r.sum)
			return true;
		else
			return false;
	}
	bool operator ==(rectangle510 r)
	{
		if (sum == r.sum)
			return true;
		else
			return false;
	}
	bool operator!=(rectangle510 r)
	{
		if (sum != r.sum)
			return true;
		else
			return false;
	}
};