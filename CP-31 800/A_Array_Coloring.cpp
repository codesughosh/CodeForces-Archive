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
    int sum=0;
    for(int i=0; i<n; i++)
    {
        if(a[i]%2==1)
        {
            sum += a[i];
        }
    }

    if(sum%2==0)
    {
        cout << "YES" <<endl;
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