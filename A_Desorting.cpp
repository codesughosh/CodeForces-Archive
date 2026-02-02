#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve() {
    int n;
    cin >> n;
    int a[n];
    for(int i=0; i<n; i++)
    {
        cin >> a[i];
    }

    int m=a[n-1]-a[0];
    for(int i=0; i<n-1; i++)
    {
        if(a[i+1] < a[i])
        {
            cout << "0" << endl;
            return;
        }
        m = min(m, a[i+1]-a[i]);
    }
    cout << m/2+1 << endl;
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