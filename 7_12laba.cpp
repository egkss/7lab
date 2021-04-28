#include <iostream>
#include <cmath>
using namespace std;

int value();
int value_2();

class equation {
public:
	int a;
	int b;
	int	c; //c = 0
};
int main() {
	equation one;
	one.a = value();
	one.b = value_2();
	one.c = 0;
	if (one.c == 0)
		cout << "x = arctg " << one.b / one.a << " + Pi * n; n ý Z" << endl;
}
int value() {
	int number;
	while (true) {
		cout << "Enter number a: ";
		cin >> number;
		if (cin.fail()) {
			cin.clear();
			cin.ignore(32767, '\n');
			cout << "Error, please enter again" << endl;
		}
		else return number;
	}
}
int value_2() {
	int number;
	while (true) {
		cout << "Enter number b: ";
		cin >> number;
		if (cin.fail()) {
			cin.clear();
			cin.ignore(32767, '\n');
			cout << "Error, please enter again" << endl;
		}
		else return number;
	}
}
