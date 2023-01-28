#include <iostream>

using namespace std;

int main() {

	int n;
	int a, b, c;
	cin >> n;

	int * sum = new int [n];
	int msum = 0;

	for (int i = 0; i < n; i++) {
		cin >> a >> b >> c;
		if (a == b && a == c) {
			sum[i] = 10000 + a * 1000;
		}
		else if (a != b && b != c && a != c) {
			int max = ((a > b ? a : b) > c ? ((a > b) ? a : b) : c);
			sum[i] = max * 100;
		}
		else if (a == b && a != c || b == c && b != a || c == a && c != b) {
			if (a == b) {
				sum[i] = 1000 + a * 100;
			}
			else if (b == c) {
				sum[i] = 1000 + b * 100;
			}
			else if (c == a) {
				sum[i] = 1000 + c * 100;
			}

		}
	}

	for (int i = 0; i < n; i++) {
		if (sum[i] > msum) {
			msum = sum[i];
		}
	}

	cout << msum << endl;
}