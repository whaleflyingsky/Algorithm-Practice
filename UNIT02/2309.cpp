#include <bits/stdc++.h>
using namespace std;

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int total = 0;
    int dwarf1, dwarf2;     // 포함안되는 난쟁이 인덱스
    int height[9];
    for (int i=0; i<9; i++) cin >> height[i];
    sort(height, height+9);

    // 9C2 -> i,j   다른난쟁이키 합->other
    for (int i=0; i<9; i++) {
        for (int j=i+1; j<9; j++) {

            total = 0;
            for (int other=0; other<9; other++) {
                if (other != i && other != j) total += height[other];
            }
            if (total == 100) {
                dwarf1 = i;
                dwarf2 = j;
            }

        }
    }
    for (int n=0; n<9; n++) {
        if (n != dwarf1 and n != dwarf2) cout << height[n] << "\n";
    }
}