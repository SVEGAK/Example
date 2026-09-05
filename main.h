#include <iostream>
class Triangle {
	double _side;
	double _height;
	public:
		Triangle(double side = 1, double height = 1);
		double square() {return 0.5 * _side * _height;}
		double get_side() { return _side; }
		double get_heigh() { return _height; }
};

Triangle::Triangle(double side, double height) {
	_side = side;
	_height = height;
}

