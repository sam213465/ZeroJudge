#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  int hour, minute;
  vector<vector<int>> times;
  cin >> n;
  for (int i = 0; i < n; i++) {
    cin >> hour >> minute;
    times.push_back({hour, minute});
  }
  int curr_hour, curr_minute;
  cin >> curr_hour >> curr_minute;
  curr_minute = curr_minute + 20;
  if (curr_minute >= 60) {
    curr_minute = curr_minute - 60;
    curr_hour++;
  }
  int index = -1;
  for (int i = 0; i < n; i++) {
    if (times[i][0] >= curr_hour) {
      index = i;
      break;
    }
  }
  int count = 0;
  if (index == -1) {
    cout << "Too Late";
  } else {
    for (int i = index; i < n; i++) {
      if (times[i][0] == curr_hour && times[i][1] >= curr_minute) {
        if (times[i][0] >= 0 && times[i][0] <= 9) {
          cout << "0" << times[i][0] << " ";
        } else {
          cout << times[i][0] << " ";
        }
        if (times[i][1] >= 0 && times[i][1] <= 9) {
          cout << "0" << times[i][1];
        } else {
          cout << times[i][1];
        }
        break;
      } else if (times[i][0] > curr_hour) {
        if (times[i][0] >= 0 && times[i][0] <= 9) {
          cout << "0" << times[i][0] << " ";
        } else {
          cout << times[i][0] << " ";
        }
        if (times[i][1] >= 0 && times[i][1] <= 9) {
          cout << "0" << times[i][1];
        } else {
          cout << times[i][1];
        }
        break;
      }
      count++;
    }
    if (count == n - index) {
      cout << "Too Late";
    }
  }
  return 0;
}

