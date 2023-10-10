#include <bits/stdc++.h>
using namespace std;

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int N, y_money=0, m_money=0;
    cin >> N;
    vector<int> v(N);
    for (int i=0; i<N; i++) {
        cin >> v[i];
        y_money += (v[i] / 30) * 10 + 10;
        m_money += (v[i] / 60) * 15 + 15;
    }

    if (y_money > m_money)      cout << "M " << m_money;
    else if (m_money > y_money) cout << "Y " << y_money;
    else                        cout << "Y M " << y_money;
}