#include <deque>
#include <iostream>
using namespace std;

int main() {
    int q, v, d, o;
    deque<int> A;
    cin >> q;
    for(int i=0;i<q;++i) {
        cin >> o;
        if(o == 0) {
            cin >> d >> v;
            if(d) A.push_back(v);
            else A.push_front(v);
        } else if(o == 1) {
            cin >> v;
            cout << A[v] << endl;
        } else if(o == 2) {
            cin >> d;
            if(d) A.pop_back();
            else A.pop_front();
        }
    }
}

