#include <iostream>

using namespace std;
int main() {
	int hours, minutes;
	cout << "Input your hours: ";
	cin >> hours;
	cout << "Input your minutes: ";
	cin >> minutes;
	cout << "A total of " << 60*minutes + minutes << " minutes";
}