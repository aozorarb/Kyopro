#include <iostream>
#include <list>
#include <vector>
using namespace std;

int main() {
    int n, q;
    cin >> n >> q;
    vector<list<int> > L(n);
    for(int i=0;i<q;++i) {
        int o, t, x;
        cin >> o >> t;
        if(o == 0) {
            cin >> x;
            L[t].push_back(x);
        } else if(o == 1) {
            if(L[t].empty()) {
                cout << endl;
            } else {
                list<int>::iterator last = L[t].end();
                last--;
                for(list<int>::iterator it=L[t].begin();it!=L[t].end();++it) {
                    if(it == last) cout << *it << endl;
                    else cout << *it<< " ";
                }
            }
        } else if(o == 2) {
            cin >> x;
            L[x].splice(L[x].end(), L[t]);
            L[t].clear();
        }
    }
}
            


