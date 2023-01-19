#include <iostream>

using namespace std;

int main() {

	int num[9] = {};
	int n,m;
	int max = 0;


	for (int i = 0; i < 9; i++) {
		cin >> n;
		num[i] = n;
	}

	for (int i = 0; i < 9; i++) {
		if (num[i] > max) {
			max = num[i];
			m = i + 1;
		}
	}

	cout << max << endl;
	cout << m << endl;
}