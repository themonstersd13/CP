#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define v vector<long long>
#define all(x) (x).begin(), (x).end()
#define MOD 1000000007

void solve() {
    ll n;
    cin >> n;
    v a(n);
    for (ll &x : a) cin >> x;

    ll total_sum = accumulate(all(a), 0LL);
    ll min_diff = LLONG_MAX;

    // Iterate through all possible subsets using bitmasking
    for (ll mask = 0; mask < (1LL << n); mask++) {
        ll subset_sum = 0;
        for (ll i = 0; i < n; i++) {
            if (mask & (1LL << i)) {
                subset_sum += a[i]; // Include apple in subset
            }
        }
        ll other_sum = total_sum - subset_sum;
        min_diff = min(min_diff, abs(subset_sum - other_sum));
    }

    cout << min_diff << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}
