#include <bits/stdc++.h>
using namespace std;

bool Isprimes(int x) {
  if (x < 2) {
    return false;
  }
  for (int i = 2; i * i <= x; i++) {  // �u���ˬd��ڸ�x
    if (x % i == 0) {
      return false;
    }
  }
  return true;
}
int main() {
  ios::sync_with_stdio(false); 
  cin.tie(nullptr);
  int num;
  cin >> num;
  bool exist = false;
  for (int i = 2; i * i <= num; i++) {  // �u���ˬd��ڸ�num
    if (num % i == 0) {
      int answer = num / i;
      if (Isprimes(i) && Isprimes(answer)) {
        cout << i << " " << answer;
        exist = true;
        break;
      }
    }
  }
  if (!exist) {
    cout << "0 0";
  }
  return 0;
}

