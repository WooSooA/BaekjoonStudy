#include <iostream>

using namespace std;

int main() {

	int n, m;
	string str;
	
	cin >> n;

	for (int i = 0; i < n; i++) {

		int k = 0;
		cin >> m >> str;
		for (int j = 0; j < str.length(); j++) {
			for (int k = 0; k < m; k++) {
				cout << str[j];
			}
		}
		cout << endl;
	}
}