#include "main.h"
int main() {
	double a, h;
	system("chcp 65001");system("cls");
	std::cout << "Введите сторону и высоту треугольника через пробел: ";
	std::cin >> a >> h;
	Triangle t(a, h);

	std::cout << t.square() << " -площадь для введенных стороны(" << a << ") и высоты(" << h << ")" << std::endl;
	return 0;

}
