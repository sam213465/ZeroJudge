#include <bits/stdc++.h>
using namespace std;

int main() {
  // �ϥΧֳt��J
  ios::sync_with_stdio(false); 
  cin.tie(nullptr);
  
  int n, m;
  cin >> n >> m;
  vector<int> fans(n);
  vector<int> gifts(n);
  int fan, gift;
  for (int i = 0; i < n; i++) {  // ��Ҧ������s����W
    fans[i] = i;
  }
  
  for (int i = 0; i < m; i++) {  // �[�W§��
    cin >> fan >> gift;  
    gifts[fan] = gifts[fan] + gift;
  }
  
  vector<pair<int, int>> ranking;  
  // pair���ŧi�覡 
  for (int i = 0; i < n; i++) {
    ranking.emplace_back(gifts[i], fans[i]);
    // ������ ranking.push_back(make_pair(gifts[i], fans[i]))
    // pair�������覡�����
    // 1. push_back() �̭��n�� pair�A�]���n�O�o make_pair() �� {}
    // 2. emplace_back() ���ݭn make_pair()�A���� emplace_back(a,b) �N�i�H�F
    // emplace_back�Mpuah_back�@�ˡA��emplace_back�t�פ񬾧�
  }
                                       // �ΦW�禡 
  sort(ranking.begin(), ranking.end(), [](auto &a, auto &b) {  
    // auto �O���sĶ���۰����A�P�_�ܼƪ�����
    // sort�w�]�O�Ѥp�ƨ�j
    
    if (a.first != b.first) {  // a.first -> §���ƶq a.second -> �����s��
      return a.first > b.first; 
      // �p�G��ӤH���B���P�A§���V�h���Ʀb�e��(��>)
    } else {
      return a.second < b.second;
      // �p�G��ӤH���B�ۦP�A�s���V�p���Ʀb�e��(��<)
    }
  });
  
  // ���c�Ƹj�w
  for (auto &[gift, fan] : ranking) {
    cout << fan << " " << gift << '\n';
  }
  
  // & �Oreference�ѦҡA���|�ƻs���
  return 0;
}

