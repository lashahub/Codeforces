#include<iostream>
using namespace std;

int l;
char c1, c2;
string str1, str2;

main() {

    cin >> str1>>str2;

    l = str1.length();

    for (int i = 0; i < l; i++) {

        c1 = str1[i];

        c2 = str2[i];

        if (str1[i] + 0 <= 92) {

            c1 = str1[i] + 32;

        }

        if (str2[i] + 0 <= 92) {

            c2 = str2[i] + 32;

        }

        if (c1 + 0 > c2 + 0) {

            cout << "1" << endl;

            return 0;

        }

        if (c2 + 0 > c1 + 0) {

            cout << "-1" << endl;

            return 0;

        }

    }

    cout << "0" << endl;

    return 0;

}
