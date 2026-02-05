#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve() {
    int n;
    cin >> n;
    int a[n];
    int neg = 0;
    int pos = 0;
    int sum=0;
    int count1=0;

    for(int i =0; i<n; i++)
    {
        cin >> a[i];
        if(a[i] == -1)
        {
            neg++;
        }
        else
        {
            pos++;
        }
        sum += a[i];
    }
    while(pos<neg || neg%2==1)
    {
        pos++;
        neg--;
        count1++;
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