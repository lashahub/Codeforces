#include<iostream>
using namespace std;

int n, x;
string str;

main() {

    cin>>n;

    for (int i = 0; i < n; i++) {

        cin>>str;

        if (str[1] == '-') {

            x--;

        } else {

            x++;

        }

    }

    cout << x << endl;

    return 0;

}
