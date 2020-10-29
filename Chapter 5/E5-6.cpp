#include <iostream>

using namespace std;
int main() {
	int minutes;
	cout << "Input your minutes (mininum 60 minutes in an hour): ";
	cin >> minutes;
	assert(minutes > 59);
	cout << minutes/60 << " hour " << minutes%60 << " minutes";
	return 0;
}