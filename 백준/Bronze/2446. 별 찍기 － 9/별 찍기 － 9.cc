#include <iostream>
using namespace std;

int main() {

	int n;
	cin >> n;
	int m = 2 * n - 1;

	
	for (int i = 0; i < n; i++) {

		for (int j = 0; j < i; j++) {
			cout << " ";
		}
		for (int j = m; j > 2 * i; j--) {
			cout << "*";
		}

		cout << endl;

	}

	for (int i = 1; i < n; i++) {

		for (int j = 1; j < n-i; j++) {
			cout << " ";
		}
		for (int j = 1; j <= (2 * i)+1; j++) {
			cout << "*";
		}

		cout << endl;

	}


}
