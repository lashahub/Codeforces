#include<iostream>
using namespace std;

int l;
string s1, s2;

main() {

    cin >> s1>>s2;

    if (s1.length() != s2.length()) {

        cout << "NO" << endl;

        return 0;

    }

    l = s1.length();

    for (int i = 0; i < l; i++) {

        if (s1[i] != s2[l - i - 1]) {

            cout << "NO" << endl;

            return 0;

        }

    }

    cout << "YES" << endl;

    return 0;

}
