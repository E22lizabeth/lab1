#include <iostream>
#include <math.h>
#define M_PI 3.141592

using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");
	double radius, angle;
	cout << "������ ����������: ";
	cin >> radius;
	cout << "���� ������� �����: ";
	cin >> angle;
	if ((radius > 0) && ((0 <= angle) && (angle <= 360))) {
		cout << "\n����� ����������: " << 2 * radius * M_PI;
		cout << "\n������� �����: " << radius * radius * M_PI;
		cout << "\n������� ��������� �������: " << radius * radius * M_PI * angle / 360;
	}
	else { //�������� ������� � ����
		cout << "\n������";
	}
	return 0;
}