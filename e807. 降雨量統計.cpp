#include <bits/stdc++.h>
using namespace std;

int main() {
  vector<vector<double>> weekwether(7, vector<double>(4, 0));  // 二維矩陣
  vector<double> sum_day(7, 0);
  vector<double> sum_time(4, 0);
  double totalrain = 0;
  
  for (int i = 0; i < 7; i++) {  // 計算一周哪一天雨量最多
    for (int j = 0; j < 4; j++) {
      cin >> weekwether[i][j];
      totalrain = totalrain + weekwether[i][j];
    }
    sum_day[i] = totalrain;
    totalrain = 0;
  }
  
  totalrain = 0;
  for (int i = 0; i < 4; i++) {  // 計算一周哪一時段雨量最多 
    for (int j = 0; j < 7; j++) {
      totalrain = totalrain + weekwether[j][i];
    }
    sum_time[i] = totalrain;
    totalrain = 0;
  }
  
  double bigrain = sum_day[0];
  int bigrain_day = 0; 
  for (int i = 1; i < 7; i++) {
    if (sum_day[i] > bigrain) {
      bigrain = sum_day[i];
      bigrain_day = i+1;
    }
  }
  if (bigrain == sum_day[0]) {
    bigrain_day = 1;
  }
  
  bigrain = sum_time[0];  
  int bigrain_time = 0;
  for (int i = 1; i < 4; i++) {
    if (sum_time[i] > bigrain) {
      bigrain = sum_time[i];
      bigrain_time = i+1;
    }
  }
  if (bigrain == sum_time[0]) {
    bigrain_time = 1;
  }
  
  cout << bigrain_day << endl;  
  
  if (bigrain_time == 1) {
    cout << "morning" ;
  } else if (bigrain_time == 2) {
    cout << "afternoon";
  } else if (bigrain_time == 3) {
    cout << "night";
  } else if (bigrain_time == 4) {
    cout << "early morning";
  }
  
  return 0;
}

