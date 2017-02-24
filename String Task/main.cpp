#include<iostream>
using namespace std;

bool x = false;
int l;
char c;
string str;

main() {

    cin >> str;

    l = str.length();

    for (int i = 0; i < l; i++) {

        c = str[i];

        x = false;

        switch (c) {

            case 'A': break;
            case 'E': break;
            case 'I': break;
            case 'O': break;
            case 'U': break;
            case 'Y': break;
            case 'a': break;
            case 'e': break;
            case 'i': break;
            case 'o': break;
            case 'u': break;
            case 'y': break;
            default: x = true;
                break;

        }

        if (x) {

            if (c + 0 < 92) {

                c = c + 32;

                cout << "." << c;

            } else {

                cout << "." << c;

            }

        }

    }

    return 0;

}
