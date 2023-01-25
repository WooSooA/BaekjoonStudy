#include <iostream>

using namespace std;

int main() {

	int a, b, c;
	int middle = 0;

	cin >> a >> b >> c;

	if (a > b && a <= c || a <= b && a > c) {

		middle = a;
	}
	else if (b > a && b <= c || b > c && b < a) {
		middle = b;
	}
	else
		middle = c;


	cout << middle;
}