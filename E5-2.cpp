#include <iostream>

using namespace std;
int main() {
	float r;
	const float pi = 3.1415926;
	cout << "Please input the radius of your sphere: ";
	cin >> r;
	cout << "The radius of your sphere is " << (4.0/3.0)*pi*pow(r,3);
	return 0;
}