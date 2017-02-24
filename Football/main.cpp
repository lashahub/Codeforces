#include<iostream>
using namespace std;

int n, x0, x1;
string str;

main() {

    cin>>str;

    n = str.length();

    for (int i = 0; i < n; i++) {

        if (str[i] == '0') {

            x0++;
            x1 = 0;

        } else {

            x1++;
            x0 = 0;

        }

        if (x1 == 7 || x0 == 7) {

            cout << "YES" << endl;

            return 0;

        }

    }

    cout << "NO" << endl;

    return 0;

}
