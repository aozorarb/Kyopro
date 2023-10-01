#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>
using namespace std;

int main() {
  int N, quon; cin >> N >> quon;
  queue<pair<string, int> > process;
  for(int i=0;i<N;++i) {
    string a; int b;
    cin >> a >> b;
    process.push(make_pair(a, b));
  }
  int time = 0;
  while(!process.empty()) {
    auto pc = process.front();
    process.pop();
    if(pc.second <= quon) {
      cout << pc.first << " " << pc.second + time << endl;
      time += pc.second;
    } else {
      pc.second -= quon;
      process.push(make_pair(pc.first, pc.second));
      time += quon;
    }
  }
}

