#include <bits/stdc++.h>
using namespace std;

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int N, X;
    cin >> N >> X;
    vector<int> v(N);
    for(int i=0; i<N; i++) cin >> v[i];
    for(int j=0; j<N; j++) {
        if(v[j]<X) cout << v[j] << ' ';
    }
}