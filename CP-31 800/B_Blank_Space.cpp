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
    int count1 = 0;
    int count2 = 0;
    if(n==1)
    {
        if(a[0]==0)
        {
            cout << 1 << endl;
            return;
        }
    }
    for(int i=0; i<n; i++)
    {
        if(a[i]==1)
        {
            count1 = max(count1, count2);
            count2=0;
        }
        else if(i==n-1 && a[i]==0)
        {
            count2++;
            count1 = max(count1, count2);
        }
        else if(a[i]==0)
        {
        count2++;
        }
    }
    cout << count1 << endl;
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