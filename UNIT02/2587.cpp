#include <bits/stdc++.h>
using namespace std;

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int arr[5];
    int addAll = 0;
    for (int i=0; i<5; i++) {
        cin >> arr[i];
        addAll += arr[i];
    }
    sort(arr, arr+5);
    cout << addAll / 5 << "\n" << arr[2];
}