#include<iostream>
int main() {
	double radius, height, volume;
	std::cout << "������Ҫ����İ뾶�͸߶�:";
	std::cin >> radius >> height;
	volume = 3.14*radius*radius*height;
	std::cout << "��Բ��������Ϊ" << volume << std::endl;
	system("pause");
	return 0;
}