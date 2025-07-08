#include <bits/stdc++.h>
using namespace std;

int main() {
	vector<int> minutes;
    vector<int> hours;
    int n, t;
    cin >> n;
    int h, m;
    cin >> h >> m;
    hours.push_back(h);
    minutes.push_back(m);
    for (int i = 0; i < n; i++) {
      cin >> t;
      int minute = 0; 
      minute = minutes[i] + t;
      if (minute / 60 > 0) {
        int howmanyhour = minute / 60;
        minute = minute % 60;
        minutes.push_back(minute);
        int hour = hours[i] + howmanyhour;
        if (hour >= 24) {
          hour = hour - 24;
        }
        hours.push_back(hour);
      } else {
        minutes.push_back(minute);
        int hour = hours[i];
        hours.push_back(hour);
      }
    }
    int p;
    cin >> p;
    while (1) {
      if (hours[p] < 10) {
        cout << "0";
        cout << hours[p] << ":";
        if (minutes[p] < 10) {
          cout << "0" << minutes[p] << endl;
        } else {
          cout << minutes[p] << endl;
        }
      } else {
        if (minutes[p] < 10) {
          cout << hours[p] << ":" << "0" << minutes[p] << endl;
        } else {
          cout << hours[p] << ":" << minutes[p] << endl;
        }
      }
      cin >> p;
      if (p == 0) {
        break;
      }
    }
    return 0;
}

