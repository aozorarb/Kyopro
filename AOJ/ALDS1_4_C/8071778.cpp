#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
using namespace std;
int main() {
  int N;
  map<string, bool> dic;
  cin >> N;
  string cmd, arg;
  for(int i=0;i<N;++i) {
    cin >> cmd >> arg;
    switch(cmd[0]) {
      case 'i':
        dic[arg] = true;
        break;
      case 'f':
        cout << ( dic[arg] ? "yes" : "no" ) << endl;
        break;
    }
  }
}

