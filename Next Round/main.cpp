#include<iostream>
using namespace std;

int n, k, arr[51], m, ans;

main() {

    cin >> n >> k;

    for (int i = 0; i < n; i++) {

        cin >> arr[i];

    }

    m = arr[k - 1];

    ans = k - 1;

    if (m == 0) {

        ans = 0;

        for (int i = 0; i < k; i++) {

            if (arr[i] != 0) {

                ans++;

            }

        }

        cout << ans << endl;

        return 0;

    }

    for (int i = k - 1; i < n; i++) {

        if (m == arr[i] && arr[i] != 0) {

            ans++;

        } else {

            break;

        }

    }

    cout << ans << endl;

    return 0;

}
