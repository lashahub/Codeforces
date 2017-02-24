#include<iostream>
using namespace std;

int x, ans;
char lastc;
string str;

main() {

    cin>>x;

    cin>>str;

    lastc = str[0];

    for (int i = 1; i < x; i++) {

        if (lastc == str[i]) {

            ans++;

        } else {

            lastc = str[i];

        }

    }

    cout << ans << endl;

    return 0;

}
