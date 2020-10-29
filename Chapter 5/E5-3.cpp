#include <iostream>

using namespace std;
int main() {
	int width, height;
	cout << "Please input your rectangle's width:";
	cin >> width;
	cout << "Please intput your rectangle's height";
	cin >> height;
	cout<< "Perimeter = "<< 2*(width*height);
	return 0;
}