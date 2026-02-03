#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve() {
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    int count = 0;

    if(d<b)
    {
        cout << "-1" << endl;
    }
    else
    {
        count += d-b;
        if(a+count < c)
        {
            cout << "-1" << endl;
        }
        else
        {
            cout << a+ 2*count - c << endl;
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