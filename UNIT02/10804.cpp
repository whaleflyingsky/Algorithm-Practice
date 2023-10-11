#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);

    vector<int> card(20);
    vector<int> start(10);
    vector<int> end(10);
    for (int i=0; i<20; i++) card[i] = i+1;

    for (int i=0; i<10; i++) {
        cin >> start[i] >> end[i];
        reverse(card.begin()+start[i]-1, card.begin()+end[i]);
    }

    for (int i=0; i<20; i++) cout << card[i] << " ";
}
