// https://atcoder.jp/contests/abc157/tasks/abc157_b
#include <iostream>
#include <vector>
using namespace std;

class Bingo {
  public:
  bool card[3][3];
  int card_number[3][3];

  void init() {
    for(int i=0;i<3;++i) for(int j=0;j<3;++j) card[i][j] = false;
    for(int i=0;i<3;++i) for(int j=0;j<3;++j) cin >> card_number[i][j];
    int n; cin >> n;
    for(int i=0;i<n;++i) {
      int x; cin >> x;
      for(int j=0;j<3;++j) for(int k=0;k<3;++k) {
        if(card_number[j][k] == x) card[j][k] = true;
      }
    }
  }

  void show_card() {
    cout << endl;
    for(int i=0;i<3;++i) {
      for(int j=0;j<3;++j) {
        cout << " " << (card[i][j] ? 'o' : 'x');
      }
      cout << endl;
    }
  }
  bool is_column() {
    bool ret = false;
    for(int i=0;i<3;++i) {
      if(card[0][i] && card[1][i] && card[2][i]) ret = true;
    }
    return ret;
  }

  bool is_law() {
    bool ret = false;
    for(int i=0;i<3;++i) {
      if(card[i][0] && card[i][1] && card[i][2]) ret = true;
    }
    return ret;
  }

  bool is_cross() {
    if((card[0][0] && card[1][1] && card[2][2]) || (card[0][2] && card[1][1] && card[2][0])) {
      return true;
    } else return false;
  }

  bool is_bingo() {
    if(is_column() || is_law() || is_cross()) return true;
    else return false;
  }

};

int main() {
  Bingo bingo;
  bingo.init();
  cout << (bingo.is_bingo() ? "Yes" : "No");
}
