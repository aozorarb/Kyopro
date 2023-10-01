#include <iostream>
#include <stack>
#include <vector>
using namespace std;

int main() {
    int n, q;
    cin >> n >> q;
    vector<stack<int> > S(n);
    for(int i=0;i<q;++i) {
        int o, t, x;
        cin >> o >> t;
        if(o == 0) {
            cin >> x;
            S[t].push(x);
        } else if(o == 1) {
            if(!S[t].empty()) cout << S[t].top() << endl;
		} else if(o == 2) {
            if(!S[t].empty()) S[t].pop();
        }
    }
}

