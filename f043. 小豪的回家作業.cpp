#include <bits/stdc++.h>
using namespace std;

int main() {
  int answer, num;
  cin >> answer >> num;
  if (answer == num) {
    num = answer - 3;
  }
  int plus_num = answer - num;
  if (plus_num > num) {
    cout << num << "+" << plus_num << "=" << answer << endl;
  } else {
    cout << plus_num << "+" << num << "=" << answer << endl;
  }
  return 0;
}

