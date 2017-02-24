#include<iostream>
using namespace std;

bool isfirst = true, lastwasspace = false;
int l;
string str;

main() {

    cin>>str;

    l = str.length();

    for (int i = 0; i < l; i++) {

        if (str[i] == 'W' && str[i + 1] == 'U' && str[i + 2] == 'B') {

            i = i + 2;

            if (!isfirst) {

                if (!lastwasspace) {

                    cout << " ";

                    lastwasspace = true;

                }

            } else {

                isfirst = false;

            }

        } else {

            cout << str[i];

            isfirst = false;

            lastwasspace = false;

        }

    }

    cout << endl;

    return 0;

}
