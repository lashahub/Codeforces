#include<iostream>
using namespace std;

main() {

    int n;
    int m;
    int a;

    cin >> n >> m>>a;

    long long fbr = n / a;

    if (n % a) fbr++;

    long long fbc = m / a;

    if (m % a) fbc++;

    cout << fbr * fbc << endl;

    return 0;

}
