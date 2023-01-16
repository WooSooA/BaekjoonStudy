#include <iostream>
using namespace std;

int main() {

	int n = 0;
	int h = 0;

	int x, y;
	
	for (int i = 0; i < 4; i++) {
		cin >> x >> y;
		n -= x;
		n += y;

		if (n > h) h = n;
		
	}

	cout << h;

}
