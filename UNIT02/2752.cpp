#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int a, b, c;
    cin >> a >> b >> c;
    int arr[3] = {a, b,c};
    sort(arr, arr+3);
    for(int i=0; i<3; i++) cout << arr[i] << ' ';
}