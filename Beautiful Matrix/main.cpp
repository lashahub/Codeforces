#include<iostream>
#include<cmath>
using namespace std;

int x;

main() {

    for (int i = 0; i < 5; i++) {

        for (int j = 0; j < 5; j++) {

            cin>>x;

            if (x == 1) {

                cout << abs(2 - i) + abs(2 - j) << endl;

                break;

            }

        }

    }

    return 0;

}
