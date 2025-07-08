#include <iostream>
using namespace std;

int main() {
	
  long long n, p, a, r[1005] = {0}, f = 0;
	
  for (int ii = 0; ii < 2; ii++) {
    cin >> n;
    for (int i = 0; i < n; i++) {
      cin >> p >> a;
      r[p] += a;
    }
  }
  for (int i = 1000; i >= 0; i--) {
    if (r[i]) {
      cout << i << ":" << r[i] << "\n";
      f = 1;
    }
  }
  if (!f) {
    cout << "NULL!\n";
  }
    return 0;
}

