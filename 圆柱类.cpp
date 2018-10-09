#include<iostream>
using  namespace std;
class Cylinder {
	double m_radius, m_height;
public:
	double volume() {
		return 3.14*m_radius*m_radius*m_height;
	}
	Cylinder(double i = 0, double h = 0):m_radius(i), m_height(h){}
};

int main() {
	Cylinder object(2.0, 2.0);
	double vol = object.volume();
	cout << vol << endl;
	system("pause");
	return 0;
}