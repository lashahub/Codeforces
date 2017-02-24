#include<iostream>
using namespace std;

int a, b, c;

main() {

    cin >> a >> b>>c;

    if (a == 1 && c == 1) {

        cout << a + b + c << endl;

    } else if (a == 1 || (b == 1 && a < c)) {

        cout << (a + b) * c << endl;

    } else if (c == 1 || (b == 1 && a >= c)) {

        cout << a * (b + c) << endl;

    } else {

        cout << a * b * c << endl;

    }

    return 0;

}
