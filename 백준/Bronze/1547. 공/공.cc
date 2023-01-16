#include <iostream>
using namespace std;

int main() {
    int m, x, y;

    int ball = 1;

    cin >> m;

    int i = 0;

    for (i = 0; i < m; i++) {
        cin >> x >> y;

        if (x == ball || y == ball) {
            ball = (x == ball ? y : x);
        }

    }
    cout << ball;
}
