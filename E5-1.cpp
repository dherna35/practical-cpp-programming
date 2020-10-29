#include <iostream>
using namespace std;
int main() {
	float T;
	cout << "Please input a temperature in Celcius: ";
	cin >> T;
	cout << T << " Celcius equals " << (9.0*T)/5.0  + 32 << " Fahrenheit";
	return 0; 
}