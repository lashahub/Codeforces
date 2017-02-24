#include<iostream>
using namespace std;

int n, x[5], a, ans = 0;

main() {

    cin>>n;

    for (int i = 0; i < n; i++) {

        cin>>a;

        x[a]++;

    }

    ans = ans + x[4];

    x[4] = 0;

    if (x[2] % 2 == 0) {

        ans = ans + x[2] / 2;

    } else {

        ans = ans + x[2] / 2 + 1;

        if (x[1] >= 2) {

            x[1] = x[1] - 2;

        }

        if (x[1] == 1) {

            x[1] = 0;

        }

    }

    while (x[1] != 0 && x[3] != 0) {

        ans++;

        x[1]--;
        x[3]--;

    }

    if (x[1] == 0) {

        ans = ans + x[3];

    }

    if (x[3] == 0) {

        if (x[1] != 0) {

            if (x[1] % 4 == 0) {

                ans = ans + x[1] / 4;

            } else {

                ans = ans + x[1] / 4 + 1;

            }

        }

    }

    cout << ans << endl;

    return 0;

}
