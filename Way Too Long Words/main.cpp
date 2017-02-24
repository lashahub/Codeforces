#include<iostream>
using namespace std;

int n;
string str[101], tmp;

main() {

    cin>>n;

    for (int i = 0; i < n; i++) {

        cin >> str[i];

    }

    for (int i = 0; i < n; i++) {

        tmp = str[i];

        if (tmp.length() > 10) {

            cout << tmp[0] << tmp.length() - 2 << tmp[tmp.length() - 1] << endl;

        } else {

            cout << tmp << endl;

        }

    }

    return 0;

}
