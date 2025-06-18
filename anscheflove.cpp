#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin>>T;
    while (T--) {
        int N;
        cin >> N;
        vector<long long> A(N);
        for (int i = 0; i < N; i++) {
            cin >> A[i];
        }
        vector<long long> B(N, 0);
        if (N == 1) {
            // Only one element: no tweak needed
            cout << 0 << "\n";
            continue;
        }
        long long x = A[0];  // target for odd positions (1-indexed)
        long long y = A[1];  // target for even positions (1-indexed)
        for (int i = 0; i < N; i++) {
            if ((i % 2) == 0) {
                // 0-indexed even ⇒ 1-indexed odd
                B[i] = A[i] ^ x;
            } else {
                // 0-indexed odd ⇒ 1-indexed even
                B[i] = A[i] ^ y;
            }
        }
        // Output B
        for (int i = 0; i < N; i++) {
            cout << B[i] << (i+1 < N ? ' ' : '\n');
        }
    }
    return 0;
}


//a1^a3=b3
//b3^a3