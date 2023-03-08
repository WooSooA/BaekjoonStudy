#include <iostream>

using namespace std;

int main() {

	string name;

	cin >> name;

	string algorithm;
	algorithm += name[0];

	for (int i = 0; i < name.length(); i++) {
		if (name[i] == '-') {
			algorithm += name[i + 1];
		}
	}

	cout << algorithm;
}