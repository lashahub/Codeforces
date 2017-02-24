#include<iostream>
using namespace std;

int l, x[3];
string str, ans = "";

main() {

    cin >> str;

    l = str.length();

    for (int i = 0; i < l; i += 2) {

        if (str[i] == '1') {

            x[0]++;

        }

        if (str[i] == '2') {

            x[1]++;

        }

        if (str[i] == '3') {

            x[2]++;

        }

    }

    while (x[0] != 0) {

        ans += "1+";

        x[0]--;

    }

    while (x[1] != 0) {

        ans += "2+";

        x[1]--;

    }

    while (x[2] != 0) {

        ans += "3+";

        x[2]--;

    }

    for (int i = 0; i < ans.length() - 1; i++) {

        cout << ans[i];

    }

    cout << endl;

    return 0;

}
