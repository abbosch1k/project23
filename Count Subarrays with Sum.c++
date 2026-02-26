#include <iostream>
#include <unordered_map>
using namespace std;

int main() {
    int n, k;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    cin >> k;

    unordered_map<int, int> mp;
    mp[0] = 1;

    int sum = 0, count = 0;

    for (int i = 0; i < n; i++) {
        sum += arr[i];

        if (mp.count(sum - k))
            count += mp[sum - k];

        mp[sum]++;
    }

    cout << count;
}
