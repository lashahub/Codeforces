#include<iostream>
#include<string>
using namespace std;

int y, ans, x, a, b, c, d;

main() {

    cin>>y;

    ans = y + 1;

    while (true) {

        x = ans;

        d = x % 10;
        x = x / 10;
        c = x % 10;
        x = x / 10;
        b = x % 10;
        x = x / 10;
        a = x;

        if (a != b && a != c && a != d && b != c && b != d && c != d) {

            break;

        }

        ans++;

    }

    cout << ans << endl;

    return 0;

}
