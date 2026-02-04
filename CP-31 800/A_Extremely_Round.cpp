#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve() {
    int n;
    cin >> n;
    if(n<=10)
    {
        cout << n << endl;
    }
    else
    {
        int sum = 0;
        int x = pow(10, to_string(n).size()-1);
        n = n - n%x;
        cout << 10 + (n-10)%x << endl;
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}