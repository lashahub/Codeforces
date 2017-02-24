#include<iostream>
using namespace std;

int l, k;
string n;

main() {

    cin>>n;

    l = n.length();

    for (int i = 0; i < l; i++) {

        if (n[i] == '4' || n[i] == '7') {

            k++;

        }

    }

    if (k == 4 || k == 7) {

        cout << "YES" << endl;

    } else {

        cout << "NO" << endl;

    }

    return 0;

}
