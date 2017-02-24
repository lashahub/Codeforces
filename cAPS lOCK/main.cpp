#include<iostream>
using namespace std;

int l, c0;
string str, ans;

main() {

    cin>>str;

    l = str.length();

    if (l == 1) {

        if (str[0] + 0 > 92) {

            ans = str[0] - 32;

        } else {

            ans = str[0] + 32;

        }

        cout << ans << endl;

        return 0;

    }

    for (int i = 1; i < l; i++) {

        if (str[i] + 0 < 92) {

            ans += str[i] + 32;

        } else {

            cout << str << endl;

            return 0;

        }

    }

    c0 = str[0] + 0;

    if (c0 < 92) {

        char c = c0 + 32;

        cout << c << ans << endl;

    } else {

        char c = c0 - 32;

        cout << c << ans << endl;

    }

    return 0;

}
