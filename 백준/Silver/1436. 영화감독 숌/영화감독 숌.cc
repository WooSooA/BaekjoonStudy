#include <iostream>
#include <string>

using namespace std;

int main() {
	
	int n;
	int title = 666;
	int count = 0;
	string six = "666";
	string s_title;

	cin >> n;

	while (1) {

		s_title = to_string(title);
		
		if (s_title.find(six) != string::npos) {
			++count;
		}

		if (count == n) {
			cout << title << endl;
			break;
		}

		title++;

	}
}

