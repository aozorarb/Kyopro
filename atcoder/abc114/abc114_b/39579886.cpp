#include <iostream>
#include <limits>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
  string S; cin >> S;
  size_t size = S.size();
  int min = INT32_MAX;
  for(int i=0;i<size-2;++i) {
    int num = abs(stoi(S.substr(i, 3)) - 753);
    if(min > num) min = num;
  }
  cout << min << endl;
}
