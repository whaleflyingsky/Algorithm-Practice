#include <bits/stdc++.h>
using namespace std;

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);

    char result[3];
    int arr[3][4];

    for (int i=0; i<3; i++) {
        for (int j=0; j<4; j++) {
            cin >> arr[i][j];
        }
        sort(arr[i], arr[i]+4);

        if (arr[i][0] == 1) result[i] = 'E';
        else if (arr[i][1] == 1) result[i] = 'A';
        else if (arr[i][2] == 1) result[i] = 'B';
        else if (arr[i][3] == 1) result[i] = 'C';
        else result[i] = 'D';
    }
    for (int i=0; i<3; i++) {
        cout << result[i] << "\n";
    }
}