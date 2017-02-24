#include <iostream>
using namespace std;

int l;
string str;

main() {

    cin>>str;

    l = str.length();

    for (int i = 0; i < l; i++) {

        if (str[i] == 'H' || str[i] == 'Q' || str[i] == '9') {

            cout << "YES" << endl;

            return 0;

        }

    }

    cout << "NO" << endl;

    return 0;

}
