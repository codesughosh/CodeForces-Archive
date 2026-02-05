#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve() {
    int n, a, b;
    cin >> n >> a >> b;

    if(n-2 >= a+b || (a==b && a==n))
    {
        cout << "Yes" << endl;
    }
    else 
    {
        cout << "No" << endl;
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