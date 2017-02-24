#include<iostream>
using namespace std;

int n, a = 1, p;
string str[5] = {"Sheldon", "Leonard", "Penny", "Rajesh", "Howard"};

main() {

    cin>>n;

    while (a * 5 < n) {

        n -= a * 5;

        a *= 2;

    }

    n--;

    cout << str[n / a] << endl;

    return 0;

}
