#include <bits/stdc++.h>
using namespace std;

int main() {
  int a;
  cin >> a;
  string str;
  cin >> str;
  string res = str;
  for (int i = 0; i < str.size() - 1; i++) {
    if (str[i] > str[i + 1]) {
      res = str.substr(0, i) + str.substr(i + 1);
      break;
    }
  }
  if (res == str) {
    res = res.substr(0,a - 1);
  }
  cout << res << endl;

}
