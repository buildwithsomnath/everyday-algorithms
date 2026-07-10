#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    vector<int> boys(n), girls(n);

    for (int i = 0; i < n; i++)
        cin >> boys[i];

    for (int i = 0; i < n; i++)
        cin >> girls[i];

    sort(boys.begin(), boys.end());
    sort(girls.begin(), girls.end());

    int i = 0, j = 0;
    int couples = 0;

    while (i < n && j < n) {
        if (abs(boys[i] - girls[j]) == 5) {
            couples++;
            i++;
            j++;
        }
        else if (boys[i] < girls[j] - 5) {
            i++;
        }
        else {
            j++;
        }
    }

    if (couples == n)
        cout << "YES\n";
    else
        cout << "NO\n";

    cout << couples << '\n';

    return 0;
}