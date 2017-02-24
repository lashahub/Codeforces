#include<iostream>
using namespace std;

int l;
string str;

main() {

    cin>>str;

    l = str.length();

    if (str[0] + 0 > 92) {

        char c = str[0] - 32;

        cout << c;

    } else {

        cout << str[0];

    }

    for (int i = 1; i < l; i++) {

        cout << str[i];

    }

    cout << endl;

    return 0;

}
