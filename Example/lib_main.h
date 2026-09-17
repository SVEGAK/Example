#include <iostream>
class Triangle {
	double _side;
	double _height;
	public:
		Triangle(double side = 1, double height = 1);
		double square() {return 0.5 * _side * _height;}
		double get_side() { return _side; }
		double get_height() { return _height; }
};

Triangle::Triangle(double side, double height) {
	if (((side * height * 0.5) > 0)&&(side > 0 && height > 0)) {
		_side = side;
		_height = height;
	}
	else{
		throw std::invalid_argument("Такой треугольник не может существовать.");
	}
}

