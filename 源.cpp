#include<iostream>
int main() {
	double radius, height, volume;
	std::cout << "请输入要计算的半径和高度:";
	std::cin >> radius >> height;
	volume = 3.14*radius*radius*height;
	std::cout << "该圆柱体的体积为" << volume << std::endl;
	system("pause");
	return 0;
}