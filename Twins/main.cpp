#include<iostream>
#include<algorithm>
using namespace std;

int n, me, twin;

main() {

    cin>>n;

    int a[n];

    for (int i = 0; i < n; i++) {

        cin >> a[i];

    }

    sort(a, a + n, greater<int>());

    for (int i = 0; i < n; i++) {

        for (int j = 0; j <= i; j++) {

            me += a[j];

        }

        for (int j = i + 1; j < n; j++) {

            twin += a[j];

        }

        if (me > twin) {

            cout << i + 1 << endl;

            break;

        }

        me = 0;

        twin = 0;

    }

    return 0;

}
