#include<iostream>
#include<algorithm>
using namespace std;

int n, c;

main() {

    cin>>n;

    int x[n], a[n] = {0};

    for (int i = 0; i < n; i++) {

        cin >> x[i];

    }

    for (int i = 0; i < n - 1; i++) {

        if (x[i + 1] >= x[i]) {

            a[c]++;

        } else {

            c++;

        }

    }

    sort(a, a + n, greater<int>());

    cout << a[0] + 1 << endl;

    return 0;

}
