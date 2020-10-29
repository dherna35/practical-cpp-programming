#include <iostream>

using namespace std;
int main() {
	float kph;
	cout << "Input your speed in kilometers per hour: ";
	cin >> kph;
	cout << "Miles per hour = "<<.6213712*kph;
	return 0;
}