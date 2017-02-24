#include<iostream>
#include<algorithm>
using namespace std;

int n;

main() {

    cin>>n;

    pair <int, int> x[n];

    for (int i = 0; i < n; i++) {

        cin >> x[i].first;

        x[i].second = i + 1;

    }

    sort(x, x + n);

    for (int i = 0; i < n; i++) {

        cout << x[i].second << " ";

    }

    return 0;

}
