#include <bits/stdc++.h>
using namespace std;

#define int long long


void solve() {
    int n,k;
    cin>>n>>k;
    vector<int> a(n);
    for(int i=0;i<n;i++)
        cin>>a[i];
    while (k--) {
        int q;
        cin>>q;
        auto it = lower_bound(a.begin(),a.end(),q);
        if (it == a.end()) {
            cout<<"NO"<<endl;
        }
        else {
            cout<<(*it == q?"YES":"NO")<<endl;
        }
    }
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int tests = 1;
    //cin >> tests;
    while (tests--) {
        solve();
    }

    return 0;
}
