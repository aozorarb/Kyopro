#include <iostream>
#include <vector>
using namespace std;

// bubble sort is always stable
void bubble_sort(vector<string> &cards, int N) {
  for(int i=0;i<N;++i) {
    for(int j=N-1;j>i;--j) {
      if (cards[j][1] < cards[j-1][1]) {
        swap(cards[j], cards[j-1]);
      }
    }
  }
  cout << cards[0];
  for(int i=1;i<N;++i) cout << " " << cards[i];
  cout << endl;

}

void selection_sort(vector<string> &cards, int N) {
  for(int i=0;i<N;++i) {
    int minj = i;
    for(int j=i;j<N;++j) {
      if(cards[j][1] < cards[minj][1]) minj = j;
    }
    swap(cards[i], cards[minj]);
  }
  cout << cards[0];
  for(int i=1;i<N;++i) cout << " " << cards[i];
  cout << endl;
}

bool equal(vector<string> a, vector<string> b) {
  if(a.size() != b.size()) return false;
  for(int i=0;i<a.size();++i) {
    if(a[i] != b[i]) return false;
  }
  return true;
}

int main() {
  vector<string> bubble_cards(36), selection_cards(36);
  int N; cin >> N;
  for(int i=0;i<N;++i) cin >> bubble_cards[i];
  selection_cards = bubble_cards;
  bubble_sort(bubble_cards, N);
  cout << "Stable" << endl;
  selection_sort(selection_cards, N);
  if(equal(bubble_cards, selection_cards)) cout << "Stable" << endl;
  else cout << "Not stable" << endl;
}

