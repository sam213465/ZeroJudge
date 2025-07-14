#include <bits/stdc++.h>
using namespace std;

int main() {
  int hour, minute, second, time_zone;
  cin >> hour >> minute >> second >> time_zone;
  if (time_zone > 0) {
    for (int i = 0; i < time_zone; i++) {
      hour++;
      if (hour > 36) {
        hour = hour - 36;
      }
      minute = minute + 30;
      if (minute >= 60) {
        hour++;
        minute = minute - 60;
      }
      if (hour > 36) {
        hour = hour - 36;
      }
    }
  } else {
    for (int i = time_zone; i < 0; i++) {
      hour--;
      if (hour < 0) {
        hour = hour + 36;
      }
      minute = minute - 30;
      if (minute < 0) {
        hour--;
        minute = minute + 60;
      }
      if (hour < 0) {
        hour = hour + 36;
      }
    }
  }
  cout << hour << ":";
  if (minute >= 0 && minute <= 9) {
    cout << "0" << minute << ":";
  } else {
    cout << minute << ":";
  }
  
  if (second >= 0 && second <= 9) {
    cout << "0" << second;
  } else {
    cout << second;
  }
  return 0; 
}

