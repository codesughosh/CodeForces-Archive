#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve() {
    int n;
    
    cin >> n;
    char s[n];

    for(int i=0; i<n; i++)
    {
        cin >> s[i];
    }
    int count1 = 0;
    int count2 = 0;
    int x=0;
    for(int i=0; i<n; i++)
    {
        if(s[i]=='#')
        {
            if(count2 < 3 && count2!=0)
            {
                count1 = count1 + count2;
            }
            else if(count2 >=3)
            {
                count1 = count1 + 2;
                x = 1;
            }
            count2 = 0;
        }
        else
        {
            count2++;
        }
    }

        if(count2 < 3 && count2!=0)
            {
                count1 = count1 + count2;
            }
        else if(count2 >=3)
            {
                count1 = count1 + 2;
                x = 1;
            }
    if(x==1)
    {
        cout << "2" << endl;
    }
    else
    {
        cout << count1 << endl;
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
