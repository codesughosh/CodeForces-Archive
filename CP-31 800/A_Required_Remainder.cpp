#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve() {
    int x, y, n;
    cin >> x >> y >> n;
    if(n<x)
    {
        cout << y << endl;
        return;
    }
    for(int i=0; i < n; i++)
    {
        if((n-i)%x==y)
        {
            cout << n-i << endl;
            return;
        }
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