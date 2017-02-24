#include<iostream>
using namespace std;

int x, a, b, ans;

main() {

    cin>>x;

    for (int i = 0; i < x; i++) {

        cin >> a>>b;

        if (b - a > 1) {

            ans++;

        }

    }

    cout << ans << endl;

    return 0;

}
