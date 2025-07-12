#include <bits/stdc++.h>
using namespace std;

int main() {
  int a_line, b_line, c_line;
  int commodity;
  int t_a = 0;
  int t_b = 0;
  int t_c = 0;
  cin >> a_line >> b_line >> c_line;
  for (int i = 0; i < a_line; i++) {
    cin >> commodity;
    t_a = t_a + commodity * 3;
  }
  t_a = t_a + 2 * a_line - 2;
  for (int i = 0; i < b_line; i++) {
    cin >> commodity;
    t_b = t_b + commodity * 3;
  }
  t_b = t_b + 2 * b_line - 2;
  for (int i = 0; i < c_line; i++) {
    cin >> commodity;
    t_c = t_c + commodity * 3;
  }
  t_c = t_c + 2 * c_line - 2;
  
  if (t_a < t_b && t_a < t_c) {
    cout << "1 " << t_a;
  } else if (t_b < t_a && t_b < t_c) {
    cout << "2 " << t_b;
  } else if (t_c < t_a && t_c < t_b) {
    cout << "3 " << t_c;
  }
  
  return 0;
}

