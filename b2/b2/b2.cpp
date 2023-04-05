using namespace std;
#include <iostream>



class Triangle
{
public:
	Triangle(float a, float b, float c) {
		x = a;
		y = b;
		z = c;
	};
	string tringle_type;
	float Triangle_s;
private:
	float x;
	float y;
	float z;
};

class Isoscales : public Triangle
{
public:
	float side;
	float Isoscales_s;
};

class Equilateral : public Triangle
{
public:
	float ravnie_sides;
	float another_side;
	float Equilateral_s;
};


class Type
{
public:
	static void type(float a, float b, float c, string trifngle_type, float side, float another_side, float ravnie_sides, float Isoscales_s,float Equilateral_s, float Triangle_s) {
		if (a > b && a > c) {
			if ((a * a) == ((b * b) + (c * c))) {
				trifngle_type = "ПРЯМОЙ";
			}
			else if ((a * a) > ((b * b) + (c * c))) {
				trifngle_type = "ТУПОЙ";
			}
			else if ((a * a) < ((b * b) + (c * c))) {
				trifngle_type = "ОСТРЫЙ";
			}
		}
		if (b>a && b > c) {
			if ((b * b) == ((a * a) + (c * c))) {
				trifngle_type = "ПРЯМОЙ";
			}
			else if ((b * b) > ((a * a) + (c * c))) {
				trifngle_type = "ТУПОЙ";
			}
			else if ((b * b) < ((a * a) + (c * c))) {
				trifngle_type = "ОСТРЫЙ";
			}
		}
		if (c > b && c > a) {
			if ((c * c) == ((b * b) + (a * a))) {
				trifngle_type = "ПРЯМОЙ";
			}
			else if ((c * c) > ((b * b) + (a * a))) {
				trifngle_type = "ТУПОЙ";
			}
			else if ((c * c) < ((b * b) + (a * a))) {
				trifngle_type = "ОСТРЫЙ";
			}
		}
		if (a == b == c) {
			side = a;
			Isoscales_s = ((a * a) * 1, 73) / 4;
		}
		if (a == b) {
			ravnie_sides = a;
			another_side = c;
			Equilateral_s = (another_side / 4) * (sqrt(4 * ((a * a) - (b * b))));
		}
		else if (a == c) {
			ravnie_sides = a;
			another_side = b;
			Equilateral_s = (another_side / 4) * (sqrt(4 * ((a * a) - (b * b))));
		}
		else if (b == c) {
			ravnie_sides = c;
			another_side = a;
			Equilateral_s = (another_side / 4) * (sqrt(4 * ((a * a) - (b * b))));
		}
		else {
			float p = (a + b + c) / 2;
			Triangle_s = sqrt(p * ((p - a) * (p - b) * (p - c)));
		}
	}
};

int main()
{

}

