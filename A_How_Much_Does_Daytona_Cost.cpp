#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve() {
    int n, k;
    cin >> n >> k;
    int a[n];
    int y=0;
    for(int i=0; i<n; i++)
    {
        cin >> a[i];
    }
    for(int i=0; i<n; i++)
    {
        if(a[i]==k)
        {
            y++;
        }
    }
    if(y>=1)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
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