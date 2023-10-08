#include <bits/stdc++.h>
using namespace std;

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int num, result = 0;
    vector<int> v;
    for (int i=0; i<7; i++) {
        cin >> num;
        if (num % 2 == 1) v.push_back(num);
    }

    if (v.empty()) {
        result = -1;
        cout << result;
    } else {
        for (int j=0; j<v.size(); j++) {
            result += v[j];
        }
        sort(v.begin(), v.end());
        cout << result << "\n" << v[0];
    }
}