#include <bits/stdc++.h>
using namespace std;

int main() {
  float n, m;
  char country;
  cin >> n >> m >> country;
  double  money = 0;
  if (country == 'U') {
    money = n / 30.9 - m;
  } else if (country == 'J') {
    money = n / 0.28 - m;
  } else if (country == 'E') {
    money = n / 34.5 - m;
  } else {
    money = n - m;
  }
  
  if (money < 0) {
    cout << "No Money";
  } else if (money > 0 && money < 0.05) {
    cout << country << " " << "0.00";
  } else {
    cout << country << " ";
    cout << fixed << setprecision(2) << money; // ���p���I��X��(�|�|�ˤ��J) 
  }
  return 0;
}

