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
    int count2=0;

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
    if(sum > 0 && neg%2!=0)
    {
        cout << "1" << endl;
        return;
    }
    else if(sum > 0 && neg%2==0)
    {
        cout << "0" << endl;
        return;
    }
    else if(sum < 0)
    {
        count1 = -sum;
        sum = -sum;
        if(sum%2!=0)
        {
            count2++;
        }
        else
        {
            count2 += (sum+1)/2;
        } 
    }

    cout << max(count1, count2)  << endl;
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