#include <iostream>
using namespace std;

int main() {

	int one, two, three, four;
	int n = 0;

	for (int i = 0; i < 3; i++) {
		cin >> one >> two >> three >> four;
		n += one + two + three + four;

		if (n == 0) {
			cout << "D" << endl;
		}
		else if (n == 1) {
			cout << "C" << endl;
		}
		else if (n == 2) {
			cout << "B" << endl;
		}
		else if (n == 3) {
			cout << "A" << endl;
		}
		else
			cout << "E" << endl;

		n = 0;
	}

}
