#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
using namespace std;

int main() {
    int Q; cin >> Q;
    set<int> S;
    int o, x, y;
    for(int i=0;i<Q;++i) {
        cin >> o >> x;
        if(o == 0) { // O(log N)
            S.insert(x);
            cout << S.size() << endl;
        } else if(o == 1) { // O(log S.size)
            cout << S.count(x) << endl;
        } else if(o == 2) { // O(log S.size)
            S.erase(x);
        } else if(o == 3) {
            cin >> y;
            set<int>::const_iterator it = S.lower_bound(x);
            for(; it != S.upper_bound(y);++it) cout << *it << endl;
        }
    }

}

