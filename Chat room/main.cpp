#include<iostream>
using namespace std;

int l, x;
char c;
string str;

main() {

    cin>>str;

    l = str.length();

    for (int i = 0; i < l; i++) {

        if (str[i] == 'h') {

            x = i;

            c = 'h';

            break;

        }

    }

    if (c == 'h') {

        for (int i = x + 1; i < l; i++) {

            if (str[i] == 'e') {

                x = i;

                c = 'e';

                break;

            }

        }

    }

    if (c == 'e') {

        for (int i = x + 1; i < l; i++) {

            if (str[i] == 'l') {

                x = i;

                c = 'l';

                break;

            }

        }

    }

    if (c == 'l') {

        for (int i = x + 1; i < l; i++) {

            if (str[i] == 'l') {

                x = i;

                c = 'm';

                break;

            }

        }

    }

    if (c == 'm') {

        for (int i = x + 1; i < l; i++) {

            if (str[i] == 'o') {

                cout << "YES" << endl;

                return 0;

            }

        }

    }

    cout << "NO" << endl;

    return 0;

}
