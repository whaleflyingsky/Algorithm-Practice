#include <bits/stdc++.h>
using namespace std;

int main(void){
  ios::sync_with_stdio(0);
  cin.tie(0);
  
  int a, b;
  cin >> a >> b;
  if (b >= a) {
      cout << b - a - 1 << "\n";
      for (int i=a+1; i<b; i++) cout << i << " ";
  }
  else {
      cout << a - b - 1 << "\n";
      for (int i=b+1; i<a; i++) cout << i << " ";
  }
}
