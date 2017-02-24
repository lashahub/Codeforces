#include<iostream>
using namespace std;

int n, a, b;

bool IsPrime(int x) {

    for (int i = 2; i < x / 2 + 1; i++) {

        if (x % i == 0) {

            return false;

        }

    }

    return true;

}

main() {

    cin>>n;

    for (int i = 0; i < n; i++) {

        a = i;

        if (!IsPrime(a)&&!(IsPrime(n - a))) {

            b = n - a;

            break;

        }

    }

    cout << a << " " << b << endl;

    return 0;

}
