#include<iostream>
using namespace std;

int k, l, m, n, d, ans;

main() {

    cin >> k >> l >> m >> n>>d;

    for (int i = 1; i <= d; i++) {

        if (i % k == 0) {

            ans++;

            continue;

        }

        if (i % l == 0) {

            ans++;

            continue;

        }

        if (i % m == 0) {

            ans++;

            continue;

        }

        if (i % n == 0) {

            ans++;

            continue;

        }

    }

    cout << ans << endl;

    return 0;

}
