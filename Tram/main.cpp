#include<iostream>
using namespace std;

int n, c, cc;

main() {

    cin>>n;

    int a[n + 1], b[n + 1];

    cin >> a[0] >> b[0];

    cc = b[0];

    c = cc;

    for (int i = 1; i < n; i++) {

        cin >> a[i] >> b[i];

        cc = cc - a[i] + b[i];

        if (cc > c) {

            c = cc;

        }

    }

    cout << c << endl;

    return 0;

}
