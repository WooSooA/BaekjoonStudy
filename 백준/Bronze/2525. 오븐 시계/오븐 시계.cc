#include <iostream>

using namespace std;

int main() {

	int h, m, t, rh, rm;

	cin >> h >> m;

	cin >> t;

	m += t;

	rh = m / 60;
	rm = m % 60;

	h += rh;

	if (h > 23)
		h %= 24;

	cout << h << " " << rm;
}