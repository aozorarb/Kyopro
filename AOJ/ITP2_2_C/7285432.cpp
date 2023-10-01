#include <iostream>
#include <queue>
#include <vector>
using namespace std;

int main() {
    int n, q;
    cin >> n >> q;
    vector<priority_queue<int> > Q(n);
    for(int i=0;i<q;++i) {
        int o, t, x;
        cin >> o >> t;
        if(o == 0) {
            cin >> x;
            Q[t].push(x);
        } else if(o == 1) {
            if(!Q[t].empty()) cout << Q[t].top() << endl;
        } else if(o == 2) {
            if(!Q[t].empty()) Q[t].pop();
        }
    }
}
            


