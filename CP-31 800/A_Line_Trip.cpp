#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve() {
    int n, x;
    cin >> n >> x;
    int a[n];
    for(int i=0; i<n; i++)
    {
        cin >> a[i];
    }
    if(n==1)
    {
        cout << max(a[0], 2*(x - a[0])) << endl;
    }
    else
    {
    int y=a[0];
    for(int i=0; i<n-1 ; i++)
    {
        y = max(y, a[i+1]-a[i]);
    }
    cout << max(y , 2*(x-a[n-1])) << endl;
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