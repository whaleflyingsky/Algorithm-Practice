#include <bits/stdc++.h>
using namespace std;

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int money;
    int arr[3];
    cin >> arr[0] >> arr[1] >> arr[2];

    sort(arr, arr+3);
    if (arr[0] == arr[2]) money = 10000 + arr[1]*1000;
    else if (arr[0] == arr[1] || arr[1] == arr[2]) money = 1000 + arr[1]*100;
    else money = arr[2] * 100;

    cout << money;
}