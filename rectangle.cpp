#include <iostream>
#include <cmath>

int main()
{
	float a,b;

	std::cout << "Введите значение а:";
	std::cin >> a;

	std::cout << "Введите значение b:";
	std::cin >> b;
	if (a <= 0 || b <= 0) {
	std::cout << "error" << std::endl;
	return 0;
}
	std::cout<<"Периметр:"<<(a+b)*2<<std::endl;
	std::cout<<"Площадь:"<<a*b<<std::endl;
	std::cout<<"Длина диагонали:"<<sqrt(a*a+b*b)<<std::endl;

	return 0;
}
