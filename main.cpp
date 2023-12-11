#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int T {0};
    double A {0}, B {0}, C {0};
    cin >> T;
    for (int i = 0; i < T; i++) {
        cin >> A >> B >> C;
        cout << setbase(16) << "0x" << (long long) A << endl << setbase(10);

        cout.precision(2);
        cout << setfill('_') << setw(15) << fixed << showpos << B << endl << noshowpos;

        cout.precision(9);
        cout << scientific << uppercase << C << endl << nouppercase;
    }
    return 0;
}