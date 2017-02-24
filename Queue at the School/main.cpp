#include<iostream>
using namespace std;

int n, t;
string str, x;

main() {

    cin >> n>>t;

    cin >> str;

    x = str;

    for (int i = 0; i < t; i++) {

        for (int j = 1; j < n; j++) {

            if (str[j - 1] == 'B' && str[j] == 'G') {

                x[j - 1] = 'G';

                x[j] = 'B';

            }

        }

        str = x;

    }

    cout << str << endl;

    return 0;

}
