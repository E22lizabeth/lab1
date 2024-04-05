#include <iostream>
#include <math.h>
#define M_PI 3.141592

using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");
	double radius, angle;
	cout << "Радиус окружности: ";
	cin >> radius;
	cout << "Угол сектора круга: ";
	cin >> angle;
	if ((radius > 0) && ((0 <= angle) && (angle <= 360))) {
		cout << "\nДлина окружности: " << 2 * radius * M_PI;
		cout << "\nПлощадь круга: " << radius * radius * M_PI;
		cout << "\nПлощадь кругового сектора: " << radius * radius * M_PI * angle / 360;
	}
	else { //Проверка радиуса и угла
		cout << "\nОшибка";
	}
	return 0;
}
