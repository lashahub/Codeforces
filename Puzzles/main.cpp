#include<iostream>
#include<algorithm>
using namespace std;

int n, m;

main() {

    cin >> n>>m;

    int a[m], b[m - n + 1];

    for (int i = 0; i < m; i++) {

        cin >> a[i];

    }

    sort(a, a + m);

    for (int i = 0; i <= m - n; i++) {

        b[i] = a[i + n - 1] - a[i];

    }

    sort(b, b + (m - n + 1));

    cout << b[0] << endl;

    return 0;

}
