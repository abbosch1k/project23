#include <iostream>
#include <set>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    set<int> a, b;

    int x;

    for (int i = 0; i < n; i++) {
        cin >> x;
        a.insert(x);
    }

    for (int i = 0; i < m; i++) {
        cin >> x;
        b.insert(x);
    }

    for (int value : a) {
        if (b.count(value))
            cout << value << " ";
    }
}
