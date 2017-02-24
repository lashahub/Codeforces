#include<iostream>
using namespace std;

bool c = false;
int n;

main() {

    cin>>n;

    if (n < 10) {

        if (n == 4 || n == 7) {

            c = true;

        }

    }

    if (n >= 10 && n < 100) {

        if ((n % 10 == 4 || n % 10 == 7)&&(n / 10 == 4 || n / 10 == 7)) {

            c = true;

        }

    }

    if (n >= 100 && n < 1000) {

        if ((n % 10 == 4 || n % 10 == 7)&&(n / 100 == 4 || n / 100 == 7)&&(((n % 100) / 10 == 4) || (n % 100) / 10 == 7)) {

            c = true;

        }

    }

    if (n % 47 == 0 || n % 74 == 0 || n % 44 == 0 || n % 77 == 0) {

        c = true;

    }

    if (n % 444 == 0 || n % 447 == 0 || n % 474 == 0 || n % 477 == 0 || n % 744 == 0 || n % 747 == 0 || n % 774 == 0 || n % 777 == 0) {

        c = true;

    }

    if (n % 4 == 0 || n % 7 == 0) {

        c = true;

    }

    if (c) {

        cout << "YES" << endl;

    } else {

        cout << "NO" << endl;

    }

    return 0;

}
