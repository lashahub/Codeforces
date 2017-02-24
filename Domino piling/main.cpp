#include<iostream>
using namespace std;

int m, n;

main() {

    cin >> m>>n;

    if (m % 2 == 1 && n % 2 == 1) {

        cout << (m * n - 1) / 2 << endl;

    } else {

        cout << m * n / 2 << endl;

    }

    return 0;

}
