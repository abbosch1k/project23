#include <iostream>
using namespace std;

long long power(long long a, long long b) {
    long long result = 1;

    while (b > 0) {
        if (b % 2 == 1)
            result *= a;

        a *= a;
        b /= 2;
    }

    return result;
}

int main() {
    long long a, b;
    cin >> a >> b;

    cout << power(a, b);
}
