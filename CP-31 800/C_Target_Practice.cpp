#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve() {
    char a[10][10];
    int sum=0;
    for(int i=0; i<10; i++ )
    {
        for(int j=0; j<10; j++)
        {
            cin >> a[i][j];
            if(a[i][j] == 'X') {
                int ring = min({i, j, 9 - i, 9 - j});
                sum += ring + 1;
            }
        }
    }

    cout << sum << endl;

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