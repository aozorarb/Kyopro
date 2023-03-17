#include <iostream>
#include <set>
using namespace std;

int main() {
    int N;cin >> N;
    set<int> backet;
    for(int i=0;i<N;++i) {
        int t; cin >> t;
        backet.insert(t);
    }
    for(auto b : backet) cout << b << endl;
}
