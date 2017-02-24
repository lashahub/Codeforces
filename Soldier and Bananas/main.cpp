#include<iostream>
using namespace std;

int k, n, w, cp;

main() {

    cin >> k >> n>>w;

    cout << max(0, (w * (w + 1) * k) / 2 - n) << endl;

    return 0;

}
