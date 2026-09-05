#include <iostream>
int main() {
	double a, h, s;
	system("chcp 65001");system("cls");
	std::cout << "Введите сторону и высоту треугольника через пробел: ";
	std::cin >> a >> h;
	s = 0.5 * a * h;

	std::cout << s << " -площадь для введенных стороны(" << a << ") и высоты(" << h << ")" << std::endl;
	return 0;

}
