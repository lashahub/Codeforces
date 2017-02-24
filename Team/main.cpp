#include<iostream>
using namespace std;

int n, a, b, c, ans = 0;

main() {

    cin >> n;

    for (int i = 0; i < n; i++) {

        cin >> a >> b>>c;

        if (a + b + c >= 2) {

            ans++;

        }

    }

    cout << ans << endl;

    return 0;

}
