#include <bits/stdc++.h>
using namespace std;

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);

    vector<int> v(9);
    int max = 0;
    int max_index = 0;

    for (int i=0; i<9;i++) {
        cin >> v[i];
        if (v[i]>max) {
            max = v[i];
            max_index = i;
        }
    }
    cout << max << "\n" << max_index+1;

}
