#include <iostream>

using namespace std;

int main() {

	int x, y, z;
	int max, middle, min;

	while (1) {

		cin >> x >> y >> z;
		
		if (x == 0 && y == 0 && z == 0)
			break;

		if (x * x + y * y == z * z) {
			cout << "right" << endl;
		}
		else if (y * y + z * z == x * x)
			cout << "right" << endl;
		else if (x * x + z * z == y * y)
			cout << "right" << endl;
		else
			cout << "wrong" << endl;

		
	}


}