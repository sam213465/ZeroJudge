#include <bits/stdc++.h>
using namespace std;

int main() {
  // 使用快速輸入
  ios::sync_with_stdio(false); 
  cin.tie(nullptr);
  
  int n, m;
  cin >> n >> m;
  vector<int> fans(n);
  vector<int> gifts(n);
  int fan, gift;
  for (int i = 0; i < n; i++) {  // 把所有粉絲編號填上
    fans[i] = i;
  }
  
  for (int i = 0; i < m; i++) {  // 加上禮物
    cin >> fan >> gift;  
    gifts[fan] = gifts[fan] + gift;
  }
  
  vector<pair<int, int>> ranking;  
  // pair的宣告方式 
  for (int i = 0; i < n; i++) {
    ranking.emplace_back(gifts[i], fans[i]);
    // 等價於 ranking.push_back(make_pair(gifts[i], fans[i]))
    // pair的指派方式有兩種
    // 1. push_back() 裡面要放 pair，因此要記得 make_pair() 或 {}
    // 2. emplace_back() 不需要 make_pair()，直接 emplace_back(a,b) 就可以了
    // emplace_back和puah_back一樣，但emplace_back速度比狡快
  }
                                       // 匿名函式 
  sort(ranking.begin(), ranking.end(), [](auto &a, auto &b) {  
    // auto 是讓編譯器自動幫你判斷變數的類型
    // sort預設是由小排到大
    
    if (a.first != b.first) {  // a.first -> 禮物數量 a.second -> 粉絲編號
      return a.first > b.first; 
      // 如果兩個人金額不同，禮物越多的排在前面(用>)
    } else {
      return a.second < b.second;
      // 如果兩個人金額相同，編號越小的排在前面(用<)
    }
  });
  
  // 結構化綁定
  for (auto &[gift, fan] : ranking) {
    cout << fan << " " << gift << '\n';
  }
  
  // & 是reference參考，不會複製資料
  return 0;
}

