#include <iostream>
#include <string>

using namespace std;

int main() {

	string str;
	getline(cin, str);

	int sum = 1;

	for (int i = 0; i < str.length(); i++) {

		if (str[i] == ' ') {
			sum += 1;
		}

	}
	 
	if (str[0] == ' ') {
		sum -= 1;
	}
	if (str[str.length()-1] == ' ') {
		sum -= 1;
	}

	cout << sum;
}