#include <iostream>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    while (m != 0) {
        int temp = m;
        m = n % m;  // Efficient modulus step
        n = temp;
    }

    cout << n; // GCD is stored in 'n'
    return 0;
}
