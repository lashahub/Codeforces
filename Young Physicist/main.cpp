#include<iostream>
using namespace std;

int n, a, s[3];

main() {

    cin>>n;

    for (int i = 0; i < n; i++) {

        cin>>a;

        s[0] += a;

        cin>>a;

        s[1] += a;

        cin>>a;

        s[2] += a;

    }

    if (s[0] == 0 && s[1] == 0 && s[2] == 0) {

        cout << "YES" << endl;

    } else {

        cout << "NO" << endl;

    }

    return 0;

}
