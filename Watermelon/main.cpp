#include<iostream>
using namespace std;

int n;

main() {

    cin>>n;

    int remain = n - 2;

    if (remain >= 2 && remain % 2 == 0) {

        cout << "YES" << endl;

    } else {

        cout << "NO" << endl;

    }

    return 0;

}
